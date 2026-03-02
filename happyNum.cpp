#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int num = n;

    if (num == 1)
    {
        cout << "Happy";
        return 0;
    }
    if (num == 4)
    {
        cout << "Unhappy";
        return 0;
    }

    while (true)
    {
        int sum = 0;
        int temp = num;

        while (temp != 0)
        {
            int lastdigit = temp % 10;
            lastdigit = lastdigit * lastdigit;
            sum = sum + lastdigit;
            temp = temp / 10;
        }

        num = sum;

        if (num == 1)
        {
            cout << "Happy";
            break;
        }
        if (num == 4)
        {
            cout << "Unhappy";
            break;
        }
    }
    return 0;
}