//multi inheritance 
#include <iostream>
using namespace std;

// Parent 1: Artistic traits
class Artist {
public:
    void showArtSkill() {
        cout << "I can paint beautiful landscapes 🎨" << endl;
    }
};

// Parent 2: Mathematical traits
class Mathematician {
public:
    void showMathSkill() {
        cout << "I can solve complex equations ➗" << endl;
    }
};

// Child inherits from BOTH parents
class MultiTalented : public Artist, public Mathematician {
public:
    void showTalent() {
        cout << "I am multi-talented, inheriting from both parents!" << endl;
    }
};

int main() {
    MultiTalented person;
    person.showTalent();       // Child’s own method
    person.showArtSkill();     // From Artist
    person.showMathSkill();    // From Mathematician
    return 0;
}
