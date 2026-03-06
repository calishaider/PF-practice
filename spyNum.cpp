#include <iostream>
using namespace std;

int main ()
{
    cout << "\nEnter your num : ";
    int n; cin >> n;

    int temp = n;
    int sum = 0;
    int product = 1;
    while (temp != 0)
    {
        int lastdigit = temp % 10;
        sum += lastdigit;
        product *= lastdigit;
        temp /= 10;
    }

    if (sum == product)
    {
        cout << "Spy Number\n" << endl;
    }
    else
    {
        cout << "Not Spy Number\n" << endl;
    }

}