#include <iostream>
using namespace std;

int main ()
{
    int r,c;
    cout << "\nEnter position of a bishop on an 8x8 chessboard: ";
    cin >> r >> c;

    int count = 0;

    count = count + min(8-r,8-c);
    count = count + min(8-r,c-1);
    count = count + min(r-1,c-1);
    count = count + min(r-1,8-c);

    cout << "\nTotal moves bishop can make is: " << count << endl << endl;
}