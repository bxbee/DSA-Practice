// abstraction_full.cpp
// Complete demonstration of Abstraction in C++
// - Multiple abstract interfaces (Shape, Logger, PaymentProcessor)
// - Concrete implementations (Rectangle, Circle, ConsoleLogger, FileLogger, CreditCardProcessor, UPIProcessor)
// - Factory functions to obtain implementations
// - Polymorphic usage via pointers/references to abstract types
// - Best practices: virtual destructor, encapsulation, no public data
//
// Mnemonic (ABSTRACT):
// A: Abstract interface
// B: Behavior exposed only
// S: Separate implementation
// T: Type substitution (polymorphism)
// R: Reduce complexity
// A: Allow multiple implementations
// C: Control internals
// T: Test and reuse
//
// Mantra: "Show the controls, hide the engine."

#include <iostream>
#include <memory>
#include <vector>
#include <fstream>
#include <string>
#include <iomanip>

// -----------------------------
// Abstract interface: Shape
// -----------------------------
class Shape {
public:
    // Pure virtual function: interface says "what" but not "how"
    virtual double area() const = 0;

    // Virtual destructor ensures derived destructors run
    virtual ~Shape() = default;
};

// Concrete implementation: Rectangle
class Rectangle : public Shape {
    double width_;
    double height_;
public:
    Rectangle(double w, double h) : width_(w), height_(h) {}
    double area() const override {
        return width_ * height_; // hidden detail
    }
};

// Concrete implementation: Circle
class Circle : public Shape {
    double radius_;
public:
    Circle(double r) : radius_(r) {}
    double area() const override {
        constexpr double PI = 3.14159265358979323846;
        return PI * radius_ * radius_; // hidden detail
    }
};

// Factory for shapes (shows how callers don't need concrete types)
std::unique_ptr<Shape> make_rectangle(double w, double h) {
    return std::make_unique<Rectangle>(w, h);
}
std::unique_ptr<Shape> make_circle(double r) {
    return std::make_unique<Circle>(r);
}

// -----------------------------
// Abstract interface: Logger
// -----------------------------
class Logger {
public:
    virtual void log(const std::string &message) = 0;
    virtual ~Logger() = default;
};

// Concrete implementation: ConsoleLogger
class ConsoleLogger : public Logger {
public:
    void log(const std::string &message) override {
        std::cout << "[Console] " << message << '\n';
    }
};

// Concrete implementation: FileLogger
class FileLogger : public Logger {
    std::ofstream ofs_;
public:
    FileLogger(const std::string &filename) : ofs_(filename, std::ios::app) {}
    void log(const std::string &message) override {
        if (ofs_) ofs_ << "[File] " << message << '\n';
    }
};

// Factory for loggers
std::unique_ptr<Logger> make_console_logger() {
    return std::make_unique<ConsoleLogger>();
}
std::unique_ptr<Logger> make_file_logger(const std::string &filename) {
    return std::make_unique<FileLogger>(filename);
}

// -----------------------------
// Abstract interface: PaymentProcessor
// -----------------------------
class PaymentProcessor {
public:
    virtual bool pay(double amount) = 0; // returns true if payment succeeded
    virtual ~PaymentProcessor() = default;
};

// Concrete implementation: CreditCardProcessor
class CreditCardProcessor : public PaymentProcessor {
    std::string card_number_;
public:
    CreditCardProcessor(const std::string &card) : card_number_(card) {}
    bool pay(double amount) override {
        // Hidden complex logic simulated
        std::cout << "Processing credit card payment of " << std::fixed << std::setprecision(2) << amount << '\n';
        // pretend we validated card_number_ and charged it
        return true;
    }
};

// Concrete implementation: UPIProcessor
class UPIProcessor : public PaymentProcessor {
    std::string upi_id_;
public:
    UPIProcessor(const std::string &upi) : upi_id_(upi) {}
    bool pay(double amount) override {
        std::cout << "Processing UPI payment of " << std::fixed << std::setprecision(2) << amount << '\n';
        // pretend we invoked UPI API
        return true;
    }
};

// Factory for payment processors
std::unique_ptr<PaymentProcessor> make_credit_card_processor(const std::string &card) {
    return std::make_unique<CreditCardProcessor>(card);
}
std::unique_ptr<PaymentProcessor> make_upi_processor(const std::string &upi) {
    return std::make_unique<UPIProcessor>(upi);
}

// -----------------------------
// Demonstration helpers
// -----------------------------
void demo_shapes(const std::vector<std::unique_ptr<Shape>> &shapes, Logger &logger) {
    for (const auto &s : shapes) {
        double a = s->area(); // caller only uses interface
        logger.log("Computed area: " + std::to_string(a));
    }
}

void demo_logging(Logger &logger) {
    logger.log("Starting logging demo");
    logger.log("This is a test message");
    logger.log("Logging demo finished");
}

void demo_payments(PaymentProcessor &processor, Logger &logger) {
    double amount = 49.99;
    logger.log("Attempting payment of " + std::to_string(amount));
    bool ok = processor.pay(amount);
    logger.log(std::string("Payment ") + (ok ? "succeeded" : "failed"));
}

// -----------------------------
// Main: ties everything together
// -----------------------------
int main() {
    // Create loggers (we can swap implementations without changing demo code)
    auto consoleLogger = make_console_logger();
    auto fileLogger = make_file_logger("app.log");

    // Use console logger for interactive output
    Logger &log = *consoleLogger;

    log.log("=== Abstraction Full Demo ===");
    log.log("Mantra: Show the controls, hide the engine.");
    log.log("Mnemonic: ABSTRACT -> A B S T R A C T");

    // Shapes demo
    std::vector<std::unique_ptr<Shape>> shapes;
    shapes.push_back(make_rectangle(3.0, 4.0)); // area 12
    shapes.push_back(make_circle(2.0));         // area ~12.5664
    demo_shapes(shapes, *consoleLogger);

    // Logging demo: swap to file logger to show interchangeability
    demo_logging(*fileLogger); // writes to app.log

    // Payments demo: use credit card then UPI without changing callers
    auto cc = make_credit_card_processor("4111-1111-1111-1111");
    demo_payments(*cc, *consoleLogger);

    auto upi = make_upi_processor("raj@upi");
    demo_payments(*upi, *consoleLogger);

    log.log("=== Demo finished ===");
    log.log("Check app.log for file logger entries.");

    return 0;
}
