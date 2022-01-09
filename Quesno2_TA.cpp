// Q2. Given an integer array nums of length n and an integer target, find
// three integers in nums such that the sum is closest to target. Return the sum
// of the three integers.You may assume that each input would have exactly one
// solution .
// Input:nums =[-1,2,1,-4],target = 1 ,
// Output: 2

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int target;
    cin >> target;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    // efficient way to solve the ques is using 2 pointer approach
    int mindiff = INT_MAX;
    tuple<int, int, int> ans;
    for (int i = 0; i < n; i++)
    {
        int j = i + 1;
        int k = n - 1;
        while (j < k)
        {
            int sum = v[i] + v[j] + v[k];
            if (abs(sum - target) < mindiff)
            {
                mindiff = abs(sum - target);
                get<0>(ans) = v[i];
                get<1>(ans) = v[j];
                get<2>(ans) = v[k];
            }
            else if (sum < target)
            {
                j++;
            }
            else
                k--;
        }
    }
    int num1 = get<0>(ans);
    int num2 = get<1>(ans);
    int num3 = get<2>(ans);
    cout << num1 + num2 + num3 << endl;
    return 0;
}

// Time- Complexity O(1)
// Space - Complexity O(nlogn) n is the size of the array
