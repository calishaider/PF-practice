#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    long long low = 0;
    long long high = n;
    long long ans;

    while (true)
    {
        long long mid = (low + high)/2;
        if (low > high)
        {
            ans = high;
            break;
        }
        if(mid*mid <= n)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    cout << ans;
    return 0;
}