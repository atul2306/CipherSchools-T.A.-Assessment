// Q3. You are a professional robber planning to rob houses along a street.
// Each house has a certain amount of money stashed, the only constraint stopping you from
// robbing each of them is that adjacent houses have security systems connected and it will
// automatically contact the police if two adjacent houses were broken into on the same night.
// Given an integer array nums representing the amount of money of each house,
// return the maximum amount of money you can rob tonight without alerting the police.
//  Input:nums = [1,2,3,1]
//  Output: 4

// using memoizaion in DP
#include <bits/stdc++.h>
using namespace std;
int helper(vector<int> &v, int start, unordered_map<int, int> &mp)
{
    if (start >= v.size())
        return 0;
    if (mp.count(start))
        return mp[count];
    int op1 = v[start] + helper(v, start + 2);
    int op2 = helper(v, start + 1);
    return mp[count] = max(op1, op2);
}
int main()
{
    int size;
    cin >> size;
    vector<int> v(size);
    for (int i = 0; i < size; i++)
        cin >> v[i];
    // we can use concept of recursion here
    unordered_map<int, int> mp;
    cout << helper(v, 0, mp);
    return 0;
}

//  Time- Complexity O(n)
//  Space - Complexity O(n) n is the size of the array

// using Top-down in DP
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin >> size;
    vector<int> v(size);
    for (int i = 0; i < size; i++)
        cin >> v[i];
    // we can use concept of Tabulation here
    if (size == 0)
        return 0;
    if (size == 1)
        return v[0] << endl;
    if (size == 2)
        return max(v[0], v[1]);
    vector<int> dp(size);
    dp[0] = v[0];
    dp[1] = max(v[0], v[1]);

    for (int i = 2; i < n; i++)
        dp[i] = max(v[i] + dp[i - 2], dp[i - 1]);

    cout << dp[n - 1] << endl;
    return 0;
}

//  Time- Complexity O(n)
//  Space - Complexity O(n) n is the size of the array




// using constant space efficient approach
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin >> size;
    vector<int> v(size);
    for (int i = 0; i < size; i++)
        cin >> v[i];
    // we can use concept of Tabulation here
    if (size == 0)
        return 0;

    int v1 = v[0];
    if (n == 1)
        return v1;

    int v2 = max(v[0], v[1]);
    if (n == 2)
        return v2;

    int max1 = INT_MIN;

    for (int i = 2; i < n; i++)
    {
        max1 = max(v[i] + value1, value2);
        value1 = value2;
        value2 = max_val;
    }

    cout << max1 << endl;
    return 0;
}


//  Time- Complexity O(n)
//  Space - Complexity O(1) 