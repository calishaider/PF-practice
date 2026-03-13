#include <iostream>
using namespace std;

// Alice, an aspiring cryptographer, recently discovered an ancient scroll containing a sequence of mysterious numbers. According to a legend, these numbers hold the key to unlocking a hidden treasure buried centuries ago by an enigmatic mathematician. However, deciphering the scroll requires identifying specific pairs of numbers that follow an ancient numerical pattern.
// Alice is given an array of integers nums. She wants to determine how many pairs exist such that: • 0 ≤ i < j < nums.length • The sum of digits of nums[i] is equal to the sum of digits of nums[j].
// She believes that the correct count of these pairs will reveal a crucial clue needed to decode the next part of the scroll. Your task is to help Alice compute this number so she can continue her quest.
// Implement a function that calculates the sum of digits for each number, then counts all valid pairs where the digit sums match.
// Input Format
// Line 1: N (size of the array)
// Line 2: N space-separated integers representing the array nums
// Output Format
// Single integer: the number of special pairs


int digitSum(int n) {
    // Calculate sum of digits
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int n;
    cout << "\nEnter how many Mysterious Numbers: ";
    cin >> n;
    
    cout << "Enter Mysterious Numbers: \n";
    int* nums = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    // Count pairs with equal digit sums
    int count = 0;
    
    // Your code here
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            int a = digitSum(nums[i]);
            int b = digitSum(nums[j]);

            if (a == b)
                count++;
        }
    }
    cout << "\nCount of pairs to decode : " << count << endl << endl;
    
    delete[] nums;
    return 0;
}