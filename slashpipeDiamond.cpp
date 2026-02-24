#include <iostream>
using namespace std;

int main ()
{
    // diamond with upper lower stars
    int n;
    do
    {
        cout << "Enter no of rows (even greater than 4) : " ;
        cin >> n;
    }
    while ( n < 4 || n % 2 != 0 ) ;    
    
    int row1 = n/2 ;
    int col1 = n-1;
    int upperleft = n/2;
    int upperright = n/2;

    for (int i = 1 ; i <= row1 ; i++)
    {
        for (int j = 1 ; j <= col1 ; j++)
        {
            if ( i==1 )
            {
                cout << "*";
            }
            else if ( j == n /2 )
            {
                cout << "|";
            }
            else if (j == upperleft)
            {
                cout << "/";
            }
            else if ( j== upperright)
            {
                cout <<"\\";
            }
            else
            {
            cout <<" ";
            }
        }
        cout << endl;
        upperleft--;
        upperright++;
    }

    int row2 = n/2 ;
    int col2 = n-1;
    int lowerleft = 1;
    int lowerright = col1;

    for (int k = 1 ; k <= row2 ; k++)
    {
        for (int l = 1 ; l <= col2 ; l++)
        {
            if ( k==n/2 )
            {
                cout << "*";
            }
            else if ( l == n /2 )
            {
                cout << "|";
            }
            else if (l == lowerleft)
            {
                cout << "\\";
            }
            else if ( l == lowerright)
            {
                cout <<"/";
            }
            else
            {
            cout <<" ";
            }
        }
        cout << endl;
        lowerleft++;
        lowerright--;
    }
}