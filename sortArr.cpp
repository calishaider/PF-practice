#include <iostream>
using namespace std;
// sort an array

void sortarray(int arr[], int size)
{
    int end  = size - 1;
    for (int i = 0 ; i < end ; end--)
    {
        bool swapped = false; // if array is already sorted
        for (int j = 0; j < end; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = true;
            }
        }
        if (swapped == false) // if array is already sorted
            break;
    }
}
int main()
{
    int arr[] = {3,8,9,4,0,6,3};
    int size = sizeof(arr) / sizeof(int);

    cout << "Orignal array is : ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    sortarray(arr, size);

    cout << "\nSorted array is : ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}