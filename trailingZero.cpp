#include <iostream>
using namespace std;

int main(){
    // we get zero in the end of number everytime if we ---> 5*n
    // so we will count how many 5^n will come in n! ---> 18! ---> 2 --> 5^2 (5^1 & 5^2)
    // to achieve we will divide n continusly by n until n >= 5
    int n;
    cout << "\nEnter number: ";
    cin >> n;
    int count = 0;
    while (n >= 5)
    {
        count = count + n/5;
        n = n/5;
    }
    cout << "Trailing Zeros in Factorial: " << count << endl << endl;
}