#include <iostream>
using namespace std;

bool isPalindrome(int n) {
    int original = n;
    int rev = 0;
    while (n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev == original;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int help = 1;
    while (true) {
        if (isPalindrome(n - help)) {
            cout << "Nearest palindrome: " << n - help << endl;
            break;
        }
        if (isPalindrome(n + help)) {
            cout << "Nearest palindrome: " << n + help << endl;
            break;
        }
        help++;
    }

    return 0;
}