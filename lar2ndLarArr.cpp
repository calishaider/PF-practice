#include <iostream>
using namespace std;
// find largest, 2nd largest, smallest, 2nd smallest element in array

void max2ndmax(int arr[], int size, int max, int secondmax)
{
    max = arr[0];
    secondmax = INT_MIN;
    for(int i = 1; i < size; i++)
    {
        if(arr[i] > max)
        {
            secondmax = max;
            max = arr[i];
        }
        else if(arr[i] > secondmax)
        {
            secondmax = arr[i];
        }
    }

    cout << "Largest element in array is : " << max << endl;
    cout << "2nd Largest element in array is : " << secondmax << endl;
}
void min2ndmin(int arr[], int size, int min, int secondmin)
{
    min = arr[0];
    secondmin = INT_MAX;
    for(int i = 1; i < size; i++)
    {
        if(arr[i] < min)
        {
            secondmin = min;
            min = arr[i];
        }
        else if(arr[i] < secondmin)
        {
            secondmin = arr[i];
        }
    }

    cout << "Smallest element in array is : " << min << endl;
    cout << "2nd Smallest element in array is : " << secondmin << endl;
}
int main()
{
    int arr[] = {6,89,9,8,9,12};
    int size = sizeof(arr) / sizeof(int);

    int max, secondmax, min, secondmin;

    max2ndmax(arr, size, max, secondmax);
    min2ndmin(arr, size, min, secondmin);
}
