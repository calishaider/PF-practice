#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 0) {
        cout << 0;
        return 0;
    }
    if (n == 1) {
        cout << 1;
        return 0;
    }
    
    long long a = 0;
    long long b = 1;
    long long c;

    for (int i = 2; i <= n; i++)
    {
        c = (a + b)% 1000000007;
        a = b;
        b = c;
    }

    cout << c ;
    return 0;
}