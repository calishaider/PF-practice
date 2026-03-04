#include <iostream>
#include <vector>
using namespace std;

// kadene algorithm
// 1. Start with the first element as the current best and overall best

// 2. For each element from second to last:
//        - If adding this element to current best sum makes it bigger than current element,
//          extend current best
//        - Otherwise, start a new subarray (currentSum) from this element
//        - Update overall best if current best is bigger

// 3. After finishing all elements, the overall best is the maximum subarray sum

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    int maxSum = arr[0];
    int currentSum = arr[0];

    for(int i = 1; i < n; i++)
    {
        if (currentSum + arr[i] > arr[i])
        {
            currentSum = currentSum + arr[i];
        }
        else
        {
            currentSum = arr[i];
        }

        if (currentSum > maxSum)
            maxSum = currentSum;
    }
    cout << maxSum;
    return 0;

    // my approach without algorithm
    // int sumarr[n*n];
    // int idx = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     int sum = 0;
    //     for (int j = i; j < n; j++)
    //     {
    //         sum = sum + arr[j];
    //         sumarr[idx] = sum;
    //         idx++;
    //     }
    // }

    // int max = sumarr[0];
    // for (int i = 1; i < idx; i++)
    // {
    //     if (sumarr[i] > max)
    //     {
    //         max = sumarr[i];
    //     }
    // }

    // cout << max;
    
    // return 0;
}