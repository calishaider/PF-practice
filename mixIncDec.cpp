#include <iostream>
using namespace std ;

int main ()
{
    int n;
    cout << "Enter no of rows: ";
    cin >> n;
    int ch = 1;
    int dia1 = 2;
    int dark = n - 1;
    

    for (int i = 1; i <= n; i++)
    {
        int temp1 = ch;
        int temp2 = dark;
        for(int j = 1; j <= n; j++)
        {
            if (j < dia1)
            { 
                cout << temp1;
                temp1++;
            }
            else
            {
                cout << temp2;
                temp2--;
            }
        }
        cout <<endl;
        dark--;
        ch++;
        dia1++;

    }
    
}