#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    int newsize = 0;

    for (int i = 0; i < n; i++)
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
    n = newsize;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }


    return 0;
}