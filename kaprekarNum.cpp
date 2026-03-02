#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    if (n <= 0) {
        cout << "Not Kaprekar Number";
        return 0;
    }
    if (n == 1) {
        cout << "Kaprekar Number";
        return 0;
    }
    long long temp = n;
    int total = 0;
    while (temp != 0) {
        temp /= 10;
        total++;
    }

    long long place = 1;
    for (int i = 0; i < total; i++)
        place = place * 10;

    long long sq = n * n;
    long long right = sq % place;
    long long left  = sq / place;

    if (left + right == n ) {
        cout << "Kaprekar Number";
    }
    else {
        cout << "Not Kaprekar Number";
    }

    return 0;
}