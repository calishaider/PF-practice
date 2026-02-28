#include <iostream>
using namespace std;
// union and intersection of two arrays

void removeduplicate(int arr[], int &size)
{
    int newsize = 0;

    for (int i = 0; i < size; i++)
    {
        bool duplicate = false;
        for (int j = 0; j < newsize; j++)
        {
            if (arr[i] == arr[j])
            {
                duplicate = true;
                break;
            }
        }
        if (!duplicate)
        {
            arr[newsize] = arr[i];
            newsize++;
        }
    }

    size = newsize;
}
void unionarray(int arr1[], int arr2[], int size1, int size2, int unionarr[], int &unionsize)
{
    // merging array 1 and 2
    for (int i = 0; i < size1; i++)
    {
        unionarr[i] = arr1[i];
    }
    int x = size1;
    for (int i = 0; i < size2; i++)
    {
        unionarr[x] = arr2[i];
        x++;
    }
    removeduplicate(unionarr, unionsize);
}
void intersectionarray(int arr1[], int arr2[], int size1, int size2, int interarr[], int &intersize)
{
    int k = 0;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                interarr[k] = arr1[i];
                k++;
                break;
            }
        }
    }
    intersize = k;
}
int main()
{
    int arr1[] = {2,2,1,4,5};
    int arr2[] = {2,3,3,5,};
    int size1 = sizeof(arr1) / sizeof(int);
    int size2 = sizeof(arr2) / sizeof(int);

    removeduplicate(arr1, size1); // sets cant have duplicate elements
    removeduplicate(arr2, size2); // sets cant have duplicate elements

    int unionsize = size1 + size2; // max elements union can have
    int intersize = size1 > size2 ? size2 : size1; // max elements intersection can have

    int unionarr[unionsize];
    int interarr[intersize];

    unionarray(arr1, arr2, size1, size2, unionarr, unionsize);
    cout << "Union of arrays is : " << endl;
    for (int i = 0; i < unionsize; i++)
        cout << unionarr[i] << " ";

    intersectionarray(arr1, arr2, size1, size2, interarr, intersize);
    cout << "\nIntersection of arrays is : " << endl;
    for (int i = 0; i < intersize; i++)
        cout << interarr[i] << " ";
}