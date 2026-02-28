#include <iostream>
using namespace std;
// check sorted array ----> array is increasing or decreasing or neither increasing nor decreasing

void checksortarray(int arr[], int size, bool &inc, bool &dec, bool &strict)
{
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i+1]) // decreasing
            inc = false;

        if (arr[i] < arr[i+1]) // increasing
            dec = false;

        if (arr[i] == arr[i+1])
            strict = false;
    }
}
int main()
{
    int arr[] = {1,2,3,3,5};
    int size = sizeof(arr) / sizeof(int);

    bool inc = true;
    bool dec = true;
    bool strict = true;

    checksortarray(arr, size, inc, dec, strict);

    if (inc && !dec) // condition for [2,2,2] -----> which is neither inc nor dec
        if(strict)
        cout << "Array is strictly increasing";
        else
        cout << "Array is non decreasing";
    else if (dec && !inc) // condition for [2,2,2] -----> which is neither inc nor dec
        if(strict)
        cout << "Array is strictly decreasing";
        else
        cout << "Array is non increasing";   
    else
        cout << "Array is neither increasing nor decreasing";

    // inc = true and dec = false ----> we will use inc && !dec ----> inc = true, dec = false, !dec = true ---> both true ---> true    
}