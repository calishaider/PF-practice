#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    if(n < 0)
    {
        cout<<"Not Armstrong Number";
        return 0;
    }

    int temp = n;
    int digits = 0;

    if(n == 0)
        digits = 1;
        
    // count digits
    while (temp != 0) 
    {
        digits++;
        temp /= 10;
    }

    temp = n;
    int sum = 0;

    // calculate Armstrong sum
    while (temp != 0) 
    {
        int lastdigit = temp % 10;
        int multiply = 1;
        for (int i = 0; i < digits; i++)
        {
            multiply *= lastdigit;
        }
        sum += multiply;
        temp /= 10;
    }

    if (sum == n)
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong Number";
}