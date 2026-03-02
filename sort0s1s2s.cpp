#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    
    int newarr[n];
    int idx = 0;
    for(int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            newarr[idx] = arr[i];
            idx++;
        }
    }
    for(int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            newarr[idx] = arr[i];
            idx++;
        }
    }
    for(int i = 0; i < n; i++)
    {
        if (arr[i] == 2)
        {
            newarr[idx] = arr[i];
            idx++;
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout << newarr[i] << " ";
    }
    return 0;
}