#include <iostream>
using namespace std;

int main ()
{
    cout << "\nEnter your num : ";
    int n; cin >> n;

    int temp = n;
    int sum = 0;
    while (temp != 0)
    {
        int lastdigit = temp % 10;
        int fact = 1;
        for (int i = 2; i <= lastdigit; i++)
        {
            fact *= i;
        }
        sum += fact;
        temp /= 10;
    }

    if (sum == n)
    {
        cout << "Strong Number\n" << endl;
    }
    else
    {
        cout << "Not Strong Number\n" << endl;
    }

}