// Q1.Given an array nums containing n distinct numbers in the range[0, n],
//     return the only number in the range that is missing from the array.
//     Input : nums = [ 3, 0, 1 ],
// ouput : 2.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    // in no from 0 to n sum will be n(n+1)/2
    int sum = n * (n + 1) / 2;
    // finding the sum of the array elements
    int arraysum = 0;
    for (auto x : nums)
        arraysum += x;
    // Required missing no will be sum minus arraysum
    int missingno = sum - arraysum;
    cout << missingno << endl;

    return 0;
}

// Time- Complexity O(1)
// Space - Complexity O(1)


