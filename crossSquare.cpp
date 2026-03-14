#include <iostream>
using namespace std;

int main() {
    cout << "\nEnter no of rows: ";
    int n; cin >> n;
    cout << endl;

    int layer = n;
    int row = n;
    int col = n*n;

    int first = 1;
    int second = n;
    int third = col-n+1;
    int fourth = col;

    for (int i = 1; i <= layer; i++)
    {
        for (int j = 1; j <= row; j++)
        {
            for (int k = 1; k <= col; k++)
            {
                if ((k >= first && k <= second) || (k >= third && k <= fourth))
                    cout << "*";
                else
                    cout << " ";    
            }
            cout << endl;
        }
        first += n;
        second += n;
        third -= n;
        fourth -= n;
    }

}