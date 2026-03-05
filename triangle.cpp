 #include <iostream>
using namespace std;

int main ()
{
    /* Input three sides.
    If they can form a triangle → tell which type:
    All equal → Equilateral
    Two equal → Isosceles
    All different → Scalene
    Else → “Not a triangle”
    Also check triangle is right angle triangle or not */

    double a,b,c ;

    cout << endl << endl << "Enter sides of triangle";

    cout << "\nA = ";
    cin >> a;

    cout << "B = ";
    cin >> b;

    cout << "C = ";
    cin >> c;

    if (a + b > c && a + c > b && b + c > a) // condition to chk sides are triangle or not
    {
       
        if (a == b && b == c)
        {
            cout << "Equilateral triangle";
        }
        else
        {
            if (a == b || a == c || b == c)
            {
                cout << "Isosceles triangle";
            }
            else
            {
                cout << "Scalene triangle";
            }
        }

        int maxSide = a;
        int x = b, y = c;

        // find largest side
        if (b > maxSide) { maxSide = b; x = a; y = c; }
        if (c > maxSide) { maxSide = c; x = a; y = b; }

        if (maxSide * maxSide == x * x + y * y) {
            cout << "It is also a Right Angle Triangle" << endl;
        }
        else {
            cout << "It is NOT a Right Angle Triangle" << endl;
        }
    }
    else
    {
        cout << "Not a triangle";
    }
}