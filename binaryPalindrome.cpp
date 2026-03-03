#include <iostream>
using namespace std;

string reverse (string n)
{
    string rev = "";
    int stringsize = n.size();

    for (int i = stringsize - 1; i >= 0; i--)
    {
        rev = rev + n[i];
    }

    return rev;
}

int main() {
    int n;
    cin >> n;

    if(n == 0)
    {
        cout << "Yes";
        return 0;
    }

    // To convert num in to binary :
    // Divide the number by 2
    // Write the remainder
    // Divide the quotient again by 2
    // Repeat until quotient becomes 0
    // Write remainders from bottom to top

    int num = n;
    string binary = "";
    
    while (num != 0)
    {
        int help = num % 2;
        binary = binary + to_string(help);
        num = num / 2;
    }

    string realbinary = reverse(binary);

    if (binary == realbinary)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}