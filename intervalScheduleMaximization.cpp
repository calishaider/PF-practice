#include <iostream>
using namespace std;

struct Meeting {
    int start, end, index;
};

void sortByEndTime(Meeting meetings[], int n) {
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            // if end equal to last end then sort interval whose start is smaller
            if (meetings[j].end < meetings[i].end ||
               (meetings[j].end == meetings[i].end && meetings[j].start < meetings[i].start))
            {
                Meeting temp = meetings[j]; // make object 
                meetings[j] = meetings[i];
                meetings[i] = temp;
            }
        }
    }
}

int main() {

    int n;
    cout << "\nEnter total number of scheduled meetings in a conference room: ";
    cin >> n;

    Meeting meetings[n];
    int ans[n];
    int count = 0;

    cout << "Enter start and end time of scheduled meetings: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> meetings[i].start >> meetings[i].end;
        meetings[i].index = i;
    }

    // Sort by end time
    sortByEndTime(meetings, n);

    int currentEnd = -1;
    for (int i = 0; i < n; i++) 
    {
        if (meetings[i].start >= currentEnd) {
            ans[count++] = meetings[i].index;
            currentEnd = meetings[i].end;
        }
    }

    cout << "\nMaximum meetings scheduled: ";
    cout << count << endl;
    cout << "Indices of scheduled meetings: ";
    for (int i = 0; i < count; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl << endl;

    return 0;
}