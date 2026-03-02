#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
 
    int missing = 1;
    while (true)
    {
        int found = false;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == missing)
            {
                found = true;
                break;
            }
        }
        if (found == false)
        {
            break;
        }
        else
        {
            missing++;
        }
    }

    cout << missing;

    return 0;
}