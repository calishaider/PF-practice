#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    int trapwater = 0;
    for (int i = 1; i < n - 1; i++)
    {
        int left = 0; int right = n - 1; 
        int maxright = INT_MIN; int maxleft = INT_MIN;
        for (int j = left; j <= i; j++)
        {
            if (arr[j] > maxleft)
            {
                maxleft = arr[j];
            }
        }
        for (int k = right; k >= i; k--)
        {
            if (arr[k] > maxright)
            {
                maxright = arr[k];
            }
        }
        
        trapwater += min(maxleft, maxright) - arr[i];
    }
    cout << trapwater;
    return 0;
}