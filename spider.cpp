#include <iostream>
using namespace std;

int main ()
{
    // spider type
    int n; cout << "\nEnter num of rows (odd & >3) : "; cin >> n;
    int row = n;
    int col = n;
    int mid = n/2 +1;

    int dia1 = 1;
    int dia2 = n;

    for (int i = 1 ; i <= row ; i++)
    {
        for (int j = 1 ; j <= col ; j++)
        {
            if (i == mid && j == mid)
            {
                cout << "0";
            }
            else if ( j == dia1 || j == dia2 )
            {
                cout << "*";
            }
            else if ( j == mid || i == mid )
            {
                cout << "#";
            }
            else
            {
                cout << " ";
            }
           
        }
        cout << endl;
        dia1++;
        dia2--;

    
    }


}