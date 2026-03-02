#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    int num = n;
    int sq = n*n;
    int place = 1;
    int total = 0;
    int temp = num;

    while (temp != 0)
    {
        temp = temp / 10;
        total++;
    }

    for (int i = 0; i < total; i++)
        place = place * 10;

    int end = sq % place;

    if (num == end)
    {
        cout << "Automorphic";
    }
    else
    {
        cout << "Not Automorphic";
    }      
    return 0;
}