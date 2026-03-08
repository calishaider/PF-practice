#include <iostream>
using namespace std;

int main() 
{
    int n, k;
    cin >> n >> k;
    
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int votes[n];
    int idx = 0;

    int suspicious = 0;

    for (int i = 1; i <= k; i++)
    {
        int totalCount = 0;
        int consecutive = 0;
        bool check = false;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == i)
            {
                totalCount++;      
                consecutive++;     
            } 
            else 
            {
                consecutive = 0;   
            }

            if (consecutive > 3)
            { 
                check = true;
                break;
            }
        }
        if (check)
        {
            suspicious++;
            votes[idx] = 0;
            idx++;
        }
        else
        {
            votes[idx] = totalCount;
            idx++;
        }

    }

    int max = 0;
    int candidate;
    for (int i = 0; i < idx; i++)
    {
        if (votes[i] > max)
        {
            max = votes[i];
            candidate = i + 1;
        }
    }

    int checktie = 0;
    for (int i = 0; i < idx; i++)
    {
        if (votes[i] == max)
        {
            checktie++;
        }
    }
    
    if (checktie > 1)
    {
        cout << "TIE" << endl;
    }
    else
    {
        cout << max << " " << candidate << endl;
    }
    cout << suspicious;
    return 0;
}