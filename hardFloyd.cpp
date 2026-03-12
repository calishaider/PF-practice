#include <iostream>
using namespace std;

int main ()
{
    // right triangle with num or characters
    // a pattern of numbers where each number is formed by “row + column” concatenation rather than counting
    
    // Look closely:
    // Row 1: 11 → row = 1, col = 1 → concatenated as 1 1 → 11
    // Row 2: 12 23 → (1,2)=12, (2,3)=23
    // Row 3: 14 25 36 → (1,4)=14, (2,5)=25, (3,6)=36
    int row;
    cout << "\nEnter num of rows: ";
    cin >> row;
    int col = row;

    int dia1 = 1;
    char alpha = '1' ; //applicable for both numbers and characters while int will only print numbers
    int num = 1; //for floyd
    char rowstartalpha = alpha;

    for (int i = 1 ; i <= row ; i++)
    {
        for (int j = 1 ; j <= col ; j++)
        {
            if (j <=dia1)
            {
                cout << alpha;
                alpha++;  
                cout << num <<" ";  //for floyd
                num++;  
            }
            else
            {
                cout << " ";
            }
            
        }
        cout << endl;
        alpha = rowstartalpha;
        dia1++;

    }
}
