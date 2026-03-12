#include <iostream>
using namespace std ;

int main ()
{

    int n;
    cout << "Enter no of rows: ";
    cin >>n;
    int ch = n;
    int dia1 = 1;
    int dark = 0;
    

    for (int i = 1; i <= n; i++)
    {
        int temp2 = dark;
        int temp1 = ch;
        for(int j = 1; j <= n; j++)
        {
            if (j < dia1)
            { 
                cout << temp1;
                temp1--;
            }
            else
            {
                cout << temp2;
                temp2++;
            }
        }
        cout <<endl;
        dia1++;

    }
    
}