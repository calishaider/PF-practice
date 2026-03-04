#include <iostream>
#include <vector>
using namespace std;

// Find the element that appears more than N/2 times. Assume it always exists.
// Input
// 7
// 2 2 1 1 1 2 2
// Output
// 2
// Explanation
// 2 appears 4 times ( > 3.5).

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    float condition = n / 2.0;
    int ans = 0; 

    for (int i = 0; i < n; i++)
    {
        bool alreadyCounted = false;
        for (int k = 0; k < i; k++) 
        {
            if (arr[k] == arr[i]) 
            {
                alreadyCounted = true;
                break;
            }
        }
        if (alreadyCounted)
            continue;

        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                count++;
            }
        }
        if (count > condition)
        {
            ans = arr[i];
            break;
        }
    }

    cout << ans; 
    return 0;
}