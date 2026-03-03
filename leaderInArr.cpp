#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    int ans[n];
    int idx = 0;
    
    for (int i = 0; i < n - 1; i++)
    {
        bool strict = false;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                strict = true;
            }
            else
            {
                strict = false;
                break;
            }
        }
        if (strict)
        {
            ans[idx] = arr[i];
            idx++;
        }
    }

    for (int i = 0; i < idx; i++)
    {
        cout << ans[i] << " ";
    }

    cout << arr[n-1];

    return 0;
}