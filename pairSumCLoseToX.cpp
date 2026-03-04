#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
using namespace std;

// Given a sorted array and a number X, find the 
// pair whose sum is closest to X. Print the pair (smaller first).

// Start one pointer at the beginning (left = 0)
// Start one pointer at the end (right = n-1)
// Calculate sum = arr[left] + arr[right]
// Track the pair with minimum absolute difference from X
// If sum < X → move left++ (need bigger sum)
// If sum > X → move right-- (need smaller sum)

// Input:
// 6 54
// 10 22 28 29 30 40
// Start:
// left = 10
// right = 40
// sum = 50  (diff = 4)
// Move left (since 50 < 54):
// 22 + 40 = 62 (diff = 8)
// Move right:
// 22 + 30 = 52 (diff = 2)   best so far
// Continue until left become bigger than right.
// Final answer:
// 22 30

int main() {
    int n, X;
    cin >> n >> X;

    vector<int> arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int left = 0, right = n - 1;
    int minDiff = INT_MAX;
    int ans1 = 0, ans2 = 0;

    while(left < right) {
        int sum = arr[left] + arr[right];
        int diff = abs(sum - X);

        if(diff < minDiff) {
            minDiff = diff;
            ans1 = arr[left];
            ans2 = arr[right];
        }

        if(sum < X)
            left++;
        else
            right--;
    }

    cout << ans1 << " " << ans2;
    return 0;
}