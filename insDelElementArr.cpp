#include <iostream>
using namespace std;
// insert and delete element at n position in array
void insertelement(int arr[], int &size, int insrtelement, int insrtposition)
{
    int insrtidx = insrtposition - 1; // index for insertion
    // insertion
    for (int i = size - 1; i >= insrtidx; i--) // shift elements to right from inserting position
    {
        arr[i+1] = arr[i];
    }
    arr[insrtidx] = insrtelement; // inserting element at n
    size++; 

}
void deleteelement(int arr[], int &size, int delposition)
{
    int delidx = delposition - 1; // index for deletion
    //deletion
    for (int i = delidx; i < size - 1; i++) // shift elements to left from deleting position
    {
        arr[i] = arr[i+1];
    }
    size--;
}
int main()
{
    int arr[100] = {1,2,3,4,5};
    int size = 5;

    int insrtelement = 77; // element user want to enter
    int insrtposition = 6; // position where user want to insert element (not according to index)

    int delposition = 3; // position where user want to delete element (not according to index)
     
    insertelement(arr, size, insrtelement, insrtposition);
    cout << "After insertion : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    deleteelement(arr, size, delposition);
    cout << "\nAfter deletion : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
