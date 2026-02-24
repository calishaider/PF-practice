#include <iostream>
using namespace std;

int main()
{
    // heart
    int num; cout << "\nEnter no of rows : "; cin >> num; 
    int row = num; // n is for rows of upper half (two mountain)
    int col = num*6-1;

    int dia1 = num;
    int dia2 = num*2;
    int dia3 = num*4;
    int dia4 = dia3+num;

    for (int i = 1; i <= row; i++) //upper half two mountains
    {
        for (int j = 1; j <= col; j++)
        {
            if ( (j >= dia1 && j <= dia2) || (j >= dia3 && j <= dia4) )
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
        dia1--;
        dia2++;
        dia3--;
        dia4++;
    }

    int pyracol = col;
    int pyrarow = (col/2)+1;

    int pyradia1 = 1;
    int pyradia2 = pyracol;

    for (int i = 1 ; i <= pyrarow ; i++ ) //lower inverted pyramid
    {
        for (int j = 1; j <= pyracol; j++)
        {
            if ( j < pyradia1 || j > pyradia2)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
        pyradia1++;
        pyradia2--;
    }

    return 0;
}