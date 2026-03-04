#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    int ansarr[n];

    for (int i = 0; i < n; i++)
    {
        int product = 1;
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                product = product * arr[j];
            }
        }
        ansarr[i] = product;
    }

    for (int i = 0; i < n; i++)
    {
        cout << ansarr[i] << " ";
    }
    return 0;
}