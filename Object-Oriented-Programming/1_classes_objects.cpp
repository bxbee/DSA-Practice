#include <iostream>
using namespace std;

// Creating a class
class Student
{
public:
    // Data Members
    string name;
    int age;
    int roll;

    // Member Function
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll: " << roll << endl;
    }
};

int main()
{
    // Creating objects
    Student s1;
    Student s2;

    // Assigning values to object s1
    s1.name = "Raj";
    s1.age = 20;
    s1.roll = 101;

    // Assigning values to object s2
    s2.name = "Aman";
    s2.age = 22;
    s2.roll = 102;

    // Calling function
    cout << "Student 1 Details:" << endl;
    s1.display();

    cout << endl;

    cout << "Student 2 Details:" << endl;
    s2.display();

    return 0;
}
