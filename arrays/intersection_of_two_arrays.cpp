// Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.
// Input: nums1 = [1,2,2,1], nums2 = [2,2]
// Output: [2]

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m = 4, n = 2, c = 0;
    int am[m] = {1,2,2,1}, an[n] = {2,2};
    int ans[100] = {0};
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (am[i] == an[j])
            {
                ans[c] = am[i];
                c++;
                break;
            }
        }
    }

    // finding only unqiye elements from answer array
    int j, i;
    for (i = 0; i < c; i++)
    {
        for (j = i + 1; j < c; j++)
        {
            if (ans[i] == ans[j])
            {
                break;
            }
        }
        if (j == c)
            cout << ans[i];
    }

    return 0;
}