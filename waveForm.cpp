#include <iostream>
using namespace std;

int main() 
{
    int rows, cols;

    cout << "\nEnter num of rows: ";
    cin >> rows;
    cout << "Enter num of columns: ";
    cin >> cols;

    int arr[100][100]; 

    cout << "\nEnter matrix elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    int top = 0;
    int bottom = rows - 1;
    int left = 0;
    int right = cols - 1;

    cout << "\nWave Order: ";

    for (int j = 0; j < cols; j++)
    {
        if (j%2==0)
        {
            for (int i = 0; i < rows; i++)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        {
            for (int i = rows - 1; i >= 0; i--)
            {
                cout << arr[i][j] << " ";
            }
        }
    }


    return 0;
}