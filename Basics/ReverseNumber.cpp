#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    if (x < 0) return false; // negative numbers are not palindromes

    int original = x;
    long long rev = 0; // use long long to avoid overflow

    while (x != 0) {
        int rem = x % 10;
        rev = rev * 10 + rem;
        x /= 10;
    }

    return rev == original;
}

int main() {
    int n;
    cin >> n;

    if (isPalindrome(n))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}