#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    // Hidden data members
    string name;
    int age;
    double grade;

public:
    // Public section: direct access allowed here
    // Instead of functions, we expose variables carefully
    void setData(string n, int a, double g) {
        name = n;
        age = a;
        grade = g;
    }

    void showData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Student s;

    // Encapsulation: we cannot touch private members directly
    // s.name = "Raj"; ❌ ERROR

    // Instead, we use controlled access (here via public section)
    s.setData("Raj", 21, 9.2);
    s.showData();

    return 0;
}
