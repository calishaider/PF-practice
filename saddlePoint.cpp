#include <iostream>
using namespace std;

int main() {

    int n, m;
    cout << "\nEnter rows: ";
    cin >> n;
    cout << "Enter columns: ";
    cin >> m;
    cout << endl;
    int arr[n][m];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> arr[i][j];

    for(int i = 0; i < n; i++) {

        int minrow = 0;

        for(int j = 1; j < m; j++) {
            if(arr[i][j] < arr[i][minrow])
                minrow = j;
        }

        bool saddle = true;

        for(int k = 0; k < n; k++) {
            if(arr[k][minrow] > arr[i][minrow]) {
                saddle = false;
                break;
            }
        }

        if(saddle) {
            cout << "\nSaddle Point: " << arr[i][minrow] << endl << endl;
            return 0;
        }
    }

    cout << "\nNo Saddle Point\n" << endl;

}