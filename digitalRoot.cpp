#include <iostream>
using namespace std;

//This program logic select digits of number from start to end

long long count (long long n)
{
    long long total = 0;
    while (n != 0)
    {
        total++;
        n = n / 10;
    }
    return total;
}
long long divisor (long long n)
{
    long long place = 1;
    for (int i = 1; i < n; i++)
    {
        place = place * 10;
    }
    return place;    
}

int main() {
    long long n;
    cin >> n;

    if (n >= 0 && n <=9)
    {
        cout << n;
        return 0;
    }
    
    long long total = count(n);
    long long place = divisor(total);

    long long ans;
    while (true)
    {
        long long tempplace = place;
        long long sum = 0;
        long long temp = n; 
        while (temp != 0)
        {
            long long firstdigit = temp / tempplace;
            sum = sum + firstdigit;
            temp = temp % tempplace;
            tempplace = tempplace / 10;
        }
        if (sum >= 1 && sum <= 9) 
        {
            ans = sum;
            break;
        }
        else
        {
            n = sum;
            total = count(n);
            place = divisor(total); 
        }

    }

    cout << ans;

    return 0;
}