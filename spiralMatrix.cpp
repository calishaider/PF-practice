#include <iostream>
using namespace std;

int main() {
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

    cout << "\nSpiral Order: ";

    while (top <= bottom && left <= right) {

        // Left → Right
        for (int i = left; i <= right; i++) {
            cout << arr[top][i] << " ";
        }
        top++;

        // Top → Bottom
        for (int i = top; i <= bottom; i++) {
            cout << arr[i][right] << " ";
        }
        right--;

        // Right → Left
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                cout << arr[bottom][i] << " ";
            }
            bottom--;
        }

        // Bottom → Top
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                cout << arr[i][left] << " ";
            }
            left++;
        }
    }

    return 0;
}