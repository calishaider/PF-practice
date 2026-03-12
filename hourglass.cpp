#include <iostream>
using namespace std;

int main ()
{
    //hourglass
    int n;
    cout << "\nEnter num of row: ";
    cin >> n;
    int row = n*2-1;
    int col = row;

    int dia1 = 1;
    int dia2 = row;

    for (int i = 1 ; i <= row ; i++)
    {
        for (int j = 1 ; j <= col ; j++)
        {
            if ( j >= dia1 && j <= dia2 )
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
            
        }
        cout << endl;
    
        if(i < n)
        {
            dia1++;
            dia2--;
        }
        else
        {
            dia1--;
            dia2++;
        }
    }
}