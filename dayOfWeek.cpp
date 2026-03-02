#include <iostream>
using namespace std;

int main() {
    int day, month, year;
    cin >> day >> month >> year;
 
    int q = day;
    if ( month == 1 )
    {
        month = 13;
        year--;
    }
    if (month == 2)
    {
        month = 14;
        year--;
    }
    int m = month;
    int y = year;
    int k = y % 100;
    int j = y / 100;

    int ans = (q + (13*(m + 1))/5 + k + k/4 + j/4 + 5*j ) % 7;
    if (ans < 0) ans += 7;
    cout << ans; 
    return 0;
}