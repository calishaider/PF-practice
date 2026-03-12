#include <iostream>
using namespace std;

int main ()
{
    // triangle inside triangle (odd for better symmetry)
    int row;
    cout << "\nEnter no of rows (odd for better symmetry): ";
    cin >> row;
    int col = (row*2) -1;
    int mid = row/2+1;

    int outdia1 = row;
    int outdia2 = row;
    int india1 = mid;
    int india2 = 3*mid -2; // using straight line (3,7) and (4,10)

    for (int i = 1 ; i <= row ; i++)
    {
        for (int j = 1 ; j <= col ; j++)
        {
            if (j == outdia1 || j == outdia2 || i == row || (i == mid && (j >= outdia1 && j <= outdia2) ) || (i > mid && (j == india1 || j == india2)))
            {
                cout << "*";
               
            }
          
            else
            {
                cout << " ";
            }
          
            
        }
        cout << endl;
        if (i>=mid){
            india1++;
            india2--;}
        outdia1--;
        outdia2++;
        


    }


}