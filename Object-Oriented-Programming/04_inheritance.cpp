#include <iostream>
#include <string>

using namespace std;

// ==========================================
// 1. THE BASE CLASS (Parent)
// ==========================================
class Vehicle {
private:
    // Private: Strictly hidden. Only accessible inside the Vehicle class itself.
    string serialNumber;

protected:
    // Protected: A special access level for inheritance. 
    // Hidden from the outside world, but accessible to derived (child) classes.
    string brand;

public:
    // Public: Accessible from anywhere.
    Vehicle(string b) : serialNumber("UNKNOWN-123"), brand(b) {
        cout << "[Vehicle Constructor] Created: " << brand << endl;
    }
    
    // Virtual destructor ensures proper cleanup of derived classes
    virtual ~Vehicle() {
        cout << "[Vehicle Destructor] Destroyed: " << brand << endl;
    }

    // A virtual function allows derived classes to override it with their own implementation
    virtual void startEngine() {
        cout << "Vehicle " << brand << " engine starting... (Generic rumble)" << endl;
    }
};


// ==========================================
// 2. SINGLE INHERITANCE
// ==========================================
// Car inherits everything public/protected from Vehicle
class Car : public Vehicle {
public:
    int doors;

    // The child constructor must call the parent constructor to initialize parent data
    Car(string b, int d) : Vehicle(b), doors(d) {
        cout << "[Car Constructor] Doors set to: " << doors << endl;
    }

    ~Car() {
        cout << "[Car Destructor] Destroyed." << endl;
    }

    // Overriding the base class method. 
    // Notice we can access 'brand' because it is declared 'protected' in Vehicle.
    void startEngine() override {
        cout << "Car " << brand << " engine starting... Vroom vroom!" << endl; 
    }
};


// ==========================================
// 3. MULTILEVEL INHERITANCE
// ==========================================
// SportsCar inherits from Car, which already inherited from Vehicle
class SportsCar : public Car {
public:
    int topSpeed;

    SportsCar(string b, int d, int ts) : Car(b, d), topSpeed(ts) {
        cout << "[SportsCar Constructor] Top Speed: " << topSpeed << " mph" << endl;
    }

    ~SportsCar() {
        cout << "[SportsCar Destructor] Destroyed." << endl;
    }

    // Overriding again for highly specific behavior
    void startEngine() override {
        cout << "SportsCar " << brand << " engine starting... ROAR!" << endl;
    }
};


// ==========================================
// 4. ANOTHER BASE CLASS (For Multiple Inheritance)
// ==========================================
class Battery {
protected:
    int capacityKWh;
public:
    Battery(int cap) : capacityKWh(cap) {
        cout << "[Battery Constructor] Capacity: " << capacityKWh << "kWh" << endl;
    }
    ~Battery() {
        cout << "[Battery Destructor] Destroyed." << endl;
    }
    
    void charge() {
        cout << "Battery is currently charging..." << endl;
    }
};


// ==========================================
// 5. MULTIPLE INHERITANCE
// ==========================================
// ElectricCar inherits from TWO base classes: Car and Battery
class ElectricCar : public Car, public Battery {
public:
    ElectricCar(string b, int d, int cap) : Car(b, d), Battery(cap) {
        cout << "[ElectricCar Constructor] Created." << endl;
    }

    ~ElectricCar() {
        cout << "[ElectricCar Destructor] Destroyed." << endl;
    }

    void startEngine() override {
        cout << "ElectricCar " << brand << " systems online... (Silent hum)" << endl;
    }
};


// ==========================================
// MAIN EXECUTION
// ==========================================
int main() {
    cout << "--- DEMO 1: Single Inheritance ---" << endl;
    Car myCar("Toyota", 4);
    myCar.startEngine();

    cout << "\n--- DEMO 2: Multilevel Inheritance ---" << endl;
    SportsCar myFerrari("Ferrari", 2, 211);
    myFerrari.startEngine();

    cout << "\n--- DEMO 3: Multiple Inheritance ---" << endl;
    ElectricCar myTesla("Tesla", 4, 100);
    myTesla.startEngine(); // Inherited and overridden from Car -> Vehicle
    myTesla.charge();      // Inherited directly from Battery

    cout << "\n--- DEMO 4: Polymorphism (The magic of 'virtual') ---" << endl;
    // We can point a Base Class pointer to a Derived Class object!
    Vehicle* myVehiclePtr = &myFerrari;
    
    // Because startEngine() is 'virtual', C++ knows to call the SportsCar version,
    // even though the pointer is technically a Vehicle pointer.
    myVehiclePtr->startEngine(); 

    cout << "\n--- PROGRAM END (Watch the Destructors!) ---" << endl;
    return 0;
}

