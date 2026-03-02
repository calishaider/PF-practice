#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long num = n;
    long long max = num;
    while (num != 1)
    {
        if (num % 2 == 0)
        {
            num = num / 2;
        }
        else
        {
            num = num * 3 + 1;
        }

        if (num > max)
        {
            max = num;
        }
    }

    cout << max;
    return 0;
}