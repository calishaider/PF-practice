#include <iostream>
using namespace std;

int main() {
    cout << "\nEnter Date (Day, Month, Year): ";
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

    if (ans < 0) // to get positive always
        ans += 7;

    cout << endl;
    switch(ans)
    {
        case 0: cout<<"Saturday"; break;
        case 1: cout<<"Sunday"; break;
        case 2: cout<<"Monday"; break;
        case 3: cout<<"Tuesday"; break;
        case 4: cout<<"Wednesday"; break;
        case 5: cout<<"Thursday"; break;
        case 6: cout<<"Friday"; break;
    }
    cout <<endl <<endl;

    return 0;
}
