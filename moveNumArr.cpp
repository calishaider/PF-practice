#include <iostream>
using namespace std;
// move all -ive numbers to start, zeros to middle ,and +ive to end 
// keep order same as array

void negative(int arr[], int size)
{
    int negposition = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            int temp = arr[i];
            for (int j = i; j > negposition; j--)
            {
                arr[j] = arr[j-1];
            }
            arr[negposition] = temp;
            negposition++;
        }
    }
}
void positive(int arr[], int size)
{
    int posposition = size - 1;
    for (int i = size - 1; i >= 0; i--)
    {
        if (arr[i] > 0)
        {
            int temp = arr[i];
            for (int j = i; j < posposition; j++)
            {
                arr[j] = arr[j + 1];
            }
            arr[posposition] = temp;
            posposition--;
        }
    }
}
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
    int arr[] = {-4,0,-3,7,2,0,-9,2,0};
    int size = sizeof(arr) / sizeof(int);

    cout << "Original arrays is : ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    negative(arr, size);
    positive(arr, size);
    cout <<"\nArray with ORDER : ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    sortarray(arr, size);
    cout << "\nSorted array without ORDER : ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}