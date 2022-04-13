// Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears once or twice, return an array of all the integers that appears twice. You must write an algorithm that runs in O(n) time and uses only constant extra space.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], ans[n] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // count freqnecy of each number
    for (int i = 0; i < n; i++)
    {
        ans[a[i] - 1]++;
    }
    cout << endl;
    cout << "repeated numbers are " << endl;
    for (int i = 0; i < n; i++)
    {
        if (ans[i] > 1)
        {
            cout << i + 1 << ", ";
        }
    }

    return 0;
}