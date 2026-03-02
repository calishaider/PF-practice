#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    for(int i = n-1; i > 0; i--) 
    {      
        for(int j = 0; j < i; j++)
        {   
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    int result = 1;
    int longest[n];
    int idx = 0;

    for(int i = 0; i < n-1; i++) 
    {
        if(arr[i+1] == arr[i] + 1)
        {
            result++;
        }       
            
        else
        {
            longest[idx] = result;
            idx++;
            result = 1;
        }     
    }

    longest[idx] = result;

    int maxlen = longest[0];
    for (int i = 1; i <= idx; i++)
    {
        if (longest[i] > maxlen)
        {
            maxlen = longest[i];
        }
    }

    cout << maxlen;
    return 0;
}