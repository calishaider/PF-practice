#include <iostream>
using namespace std;

int main ()
{
    // double hollow diamond
    int n; cout << "\nEnter num of rows : "; cin >> n;
    int row = n*2+1;
    int col = n*4+2;

    int leftoutdia = row;
    int leftindia = row ;
    int rightindia = row + 1;
    int rightoutdia = row + 1;

    
    for (int i = 1 ; i <= row ; i++)
    {
        for (int j = 1 ; j <= col ; j++)
        {
            if (j >= leftoutdia && j <= leftindia)
            {
                cout << "* ";
            }
            else if ( j >= rightindia && j <= rightoutdia)
            {
                cout <<"* ";
            }
            else
            {
                cout << "  ";
            }   
          
        }
        cout << endl;

        if ( i < row/2 +1)
        {
            leftoutdia -= 2;
            leftindia--;
            rightindia++;
            rightoutdia +=2;
        }
        else
        {
            leftoutdia += 2;
            leftindia++;
            rightindia--;
            rightoutdia -=2;            
        }
    }
    

}