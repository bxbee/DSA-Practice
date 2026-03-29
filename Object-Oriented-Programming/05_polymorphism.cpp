//polymorphism 
#include <iostream>
using namespace std;

// Base class: a common "blueprint"
class Animal {
public:
    // Virtual function: lets derived classes change behavior
    virtual void speak() {
        cout << "Some animal sound..." << endl;
    }
};

// Derived class: Dog
class Dog : public Animal {
public:
    void speak() override {
        cout << "🐶 Dog says: Woof Woof!" << endl;
    }
};

// Derived class: Cat
class Cat : public Animal {
public:
    void speak() override {
        cout << "🐱 Cat says: Meow Meow!" << endl;
    }
};

// Derived class: Cow
class Cow : public Animal {
public:
    void speak() override {
        cout << "🐮 Cow says: Moo Moo!" << endl;
    }
};

int main() {
    // One interface (Animal*), many forms (Dog, Cat, Cow)
    Animal* animals[3];
    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Cow();

    cout << "=== Polymorphism Demo ===" << endl;
    for (int i = 0; i < 3; i++) {
        animals[i]->speak();  // Calls the right version automatically
    }

    // Clean up
    for (int i = 0; i < 3; i++) {
        delete animals[i];
    }

    return 0;
}
