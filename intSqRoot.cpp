#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    long long low = 0;
    long long high = n;
    long long ans;

    // only integer sq root
    while (true)
    {
        long long mid = (low + high)/2;
        if (low > high)
        {
            ans = high;
            break;
        }
        if (mid * mid <= n) 
        {
            low = mid;
            low++;
        }
        else
        {
            high = mid;
            high--;
        }
    }

// Step 2: Find decimal part
double result = ans;   
double step = 0.1;        

for(int d = 0; d < 2; d++)    // number of decimal places you want
{
    // keep adding step until square exceeds n
    while(result * result <= n)
    {
        result += step;
    }
    // last increment was too much, step back
    result -= step;
    // make step smaller to move to next decimal place
    step /= 10;
}

    cout << "Sq root of " << n << " is : " << result;
    return 0;
}

