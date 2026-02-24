#include <iostream>
using namespace std;

int main ()
{
    // palindromic pyramid
    int n; cout << "\nEnter no of rows : "; cin >> n;
    int row = n;
    int col = (row*2) -1;

    int dia1 = row;
    int dia2 = row;
    char character = '1';//applicable for both numbers and characters while int will only print numbers
    char ch1 = character;

    for (int i = 1 ; i <= row ; i++)
    {
        for (int j = 1 ; j <= col ; j++)
        {
            if (j >=dia1 && j <=dia2)
            {
                cout << character;
                if ( j < row)
                {
                    character++;
                }
                else
                {
                    character--;
                }    
            }
            else
            {
                cout << " ";
            }
            
        }
        cout << endl;
        character = ch1;
        dia1--;
        dia2++;

    }

}