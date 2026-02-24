#include <iostream>
using namespace std;

int main ()
{
    int n; cout << "\nEnter num of rows (eg: 11,21,31,..... for symmetry) : "; cin >> n;
    
    int row = n; //5 --> 1 thickness (odd), 11 --> 3 thicknes (even), 21--> 5 thickness (odd), 31 --> 7 thickness (even)
    int col = row;
    int centre = row / 2;
    int centrehalf = centre / 2;

    // kite indexes
    int kite1 = centre;
    int kite2 = centre;

    // cross indexes from corners of box
    int crossidxend = row / 10;
    int dia1 = 0;
    int dia2 = crossidxend;
    int dia4 = row - 1;
    int dia3 = dia4 - crossidxend;

    // upper line indexes
    int up1 = centre;
    int up2 = up1 + crossidxend;

    // right line indexes
    int right2 = centre + crossidxend;   
    int right1 = right2 + crossidxend + crossidxend;

    // lower line indexes
    int down1 = centre + crossidxend;
    int down2 = down1 + crossidxend + crossidxend;

    // left line indexes
    int left1 = 0;
    int left2 = crossidxend;

    // loop for making square first
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++) 
        {
            if ((j >= kite1 && j <= kite2) && // kite condition
                ((j >= dia1 && j <= dia2 || j >= dia3 && j <= dia4) ||  // cross condition
                 (j >= up1 && j <= up2 && i <= centre - crossidxend - crossidxend) || // upper line condition
                 (j >= down1 && j <= down2 && i >= centre + crossidxend + crossidxend) || // lower line condition
                 (j >= right2 && j <= right1 && i >= centre - crossidxend - crossidxend) || // right line condition
                 (j >= left1 && j <= left2 && i <= centre + crossidxend + crossidxend))) // left line condition
            {    
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
                   
        }
        cout << endl;

        // Kite increment
        if (i >= centre )
        {
            kite1++;
            kite2--;
        }
        else
        {
            kite1--;
            kite2++;
        }

        // cross increment from corners
        if (i >= crossidxend)
        {
            dia1++;
            dia4--;
        }
        dia3--;    
        dia2++;

        // upper line increment
        if (i >= 0)
        {
            if (i >= crossidxend)
                up2--;  
            up1--;    
        }
        
        // lower line increment
        if (i >= centre + crossidxend + crossidxend)
        {
            down2--;
            down1--;
        }
        
        // right line increment
        if (i >= centre - crossidxend - crossidxend) 
        {
            right2++; 
            right1++;
        }   

        // left line increment
        if (i >= centre - crossidxend)
        {
            if (i >= centre)
                left1++;
            left2++;
        }
    }
}