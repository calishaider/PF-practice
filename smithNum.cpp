#include <iostream>
using namespace std;

int finddigitsum(int n)
{
    int temp = n;
    int sum = 0;
    while (temp != 0)
    {
        int lastdigit = temp % 10;
        sum += lastdigit;
        temp /= 10;
    }
    return sum;
}


//Step 1 — start dividing by smallest prime = 2
// 12 ÷ 2 = 6 → take 2 
// 6 ÷ 2 = 3 → take 2 
// 3 is prime → take 3 
// So prime factors of 12 = 2, 2, 3

int findPrimeFactorSum (int n)
{
    int sum = 0;
    for (int i = 2; i <= n; i++)
    {
        while(true)
        {
            if (n % i == 0)
            {
                sum += finddigitsum(i);
                n = n / i;
            }
            else
            {
                break;
            }
        }
    }
    return sum;
}

int main ()
{
    cout << "\nEnter your num : ";
    int n; cin >> n;

    if (n <= 1) // 0 and 1 are prime
    {
        cout << "Not Smith Number\n" << endl;
        return 0;
    }
     
    bool composite = false;
    for (int i = 2; i <= n / 2; i++) // only composite are smith num
    {
        if (n % i == 0)
        {
            composite = true;
            break;
        }
    }
    if (!composite)
    {
        cout << "Not Smith Number";
        return 0;
    }

    int sum = finddigitsum (n);
    int primefactor = findPrimeFactorSum(n);



    if (sum == primefactor)
    {
        cout << "Smith Number\n" << endl;
    }
    else
    {
        cout << "Not Smith Number\n" << endl;
    }

}