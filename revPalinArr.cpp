#include <iostream>
using namespace std;
// reverse array and check palindrome

bool palindromecheck(int arr[], int size)
{
    int last = size - 1;
    for (int i = 0; i < size / 2; i++)
    {
        // checking palindrome
        if (arr[i] != arr[last])
        {
            return false;
        }
        last--;
    }
    return true;
}
void reversearray(int arr[], int size)
{
    int last = size - 1;
    for (int i = 0; i < size / 2; i++)
    {
        // reverse array using swap first and last elment
        int temp = arr[i];
        arr[i] = arr[last];
        arr[last] = temp;
        last--;
    }
}
int main ()
{
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(int);

    if (palindromecheck(arr, size))
    cout << endl << "Array is Palindrome";
    else
    cout << endl << "Array is not Palindrome";

    reversearray(arr, size);
    cout << "Reverse array elements are : ";
    for (int i = 0; i < size ; i++)
    {
        cout << arr[i] << " ";
    }
}