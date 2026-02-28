#include <iostream>
using namespace std;
// rotate array left and right by n

void rightrotate(int arr[], int size, int right)
{
    // right rotation   
    for (int j = 0; j < right; j++)
    {
        int temp = arr[size - 1]; // store last element
        for (int i = size - 1; i > 0; i--)
        {
            arr[i] = arr[i - 1]; // shift elements right
        }
        arr[0] = temp; // put last at front
    }
}
void leftrotate(int arr[],int size,int left)
{
    // left rotation
    for (int j = 0; j < left; j++)
    {
        int temp = arr[0]; // store first element
        for (int i = 0; i < size - 1 ; i++)
        {
            arr[i] = arr[i + 1]; // shift elements left
        }
        arr[size-1] = temp; // put first at last
    }
}
int main()
{
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(int);

    cout << "Original Array is : ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    int right = 2;
    int left = 3;
    right = right % size; // avoid useless iteration when n is greater than size
    left = left % size; // avoid useless iteration when n is greater than size

    rightrotate(arr, size, right);
    cout << endl << "Array rotated right by " << right << " is : "; 
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    leftrotate(arr, size, left);
    cout << endl << "Array rotated left by " << left << " is : ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}