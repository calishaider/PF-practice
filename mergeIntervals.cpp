#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    // Hint: Use parallel arrays or simple struct-like logic
    vector<int> start(n), end(n);
    for(int i=0; i<n; i++) cin >> start[i] >> end[i];

    // Write logic here
    // sort first to avoid confusion and gain simplicity
    for(int i = 0; i < n-1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(start[i] > start[j])
            {
                swap(start[i], start[j]);
                swap(end[i], end[j]);
            }
        }
    }

    int currStart = start[0];
    int currEnd = end[0];

    cout << "\nMerge Intervals are: \n";
    for(int i = 1; i < n; i++)
    {
        if( currEnd >= start[i]) 
        {
            currEnd = max(currEnd, end[i]);
        }
        else
        {
            cout << currStart << " " << currEnd << endl;
            currStart = start[i];
            currEnd = end[i];
        }
    }
    cout << currStart << " " << currEnd << endl;

    // Example Input
    // n = 4
    // start = [1,2,8,15]
    // end   = [3,6,10,18]

    // Intervals:
    // [1,3], [2,6], [8,10], [15,18]

    // Step 1 — Initialize current interval
    // int currStart = start[0]; // 1
    // int currEnd   = end[0];   // 3
    // This is our first “merged interval”.
    // Think of it as a stretchable block:
    // curr = [1,3]

    // Step 2 — Loop through remaining intervals
    // We will check one interval at a time and see if it overlaps with curr.

    // Iteration 1 (i=1)
    // Interval [2,6]
    // Check overlap:
    // if(start[i] <= currEnd)  // 2 <= 3 → TRUE so we extend currEnd:
    // currEnd = max(currEnd, end[i]);  // max(3,6) = 6
    // Now curr becomes:
    // [1,6]

    // Iteration 2 (i=2)
    // Interval [8,10]
    // Check overlap:
    // start[i] <= currEnd  // 8 <= 6 → FALSE so time to print current interval (in else condition)
    // cout << currStart << " " << currEnd << endl;  // prints 1 6
    // Start a new current interval:
    // currStart = start[i];  // 8
    // currEnd   = end[i];    // 10
    // Now curr is:
    // [8,10]

    // Iteration 3 (i=3)
    // Interval [15,18]
    // Check overlap:
    // start[i] <= currEnd  // 15 <= 10 → FALSE print current (in else condition)
    // cout << currStart << " " << currEnd << endl; // prints 8 10

    // Start new interval:
    // currStart = start[i];  // 15
    // currEnd   = end[i];    // 18
    // curr = [15,18]

    // Step 3 — After loop ends
    // The last interval [15,18] is still “in progress”, so we print it manually after loop ends:
    // cout << currStart << " " << currEnd << endl; // prints 15 18

    // Final Output:
    // 1 6
    // 8 10
    // 15 18

    return 0;
}