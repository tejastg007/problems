// aggresive cows problem- https://www.codingninjas.com/codestudio/problems/aggressive-cows_1082559
#include <bits/stdc++.h>
using namespace std;
int aggCows(vector<int> a, int n, int cows)
{
    sort(a.begin(), a.end());
    int s = 0, e, mid;
    int maxi = -1;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, a[i]);
    }
    e = maxi;
    int cowCount = 1, lastPos = a[0], flag = 0, ans;
    while (s <= e)
    {
        flag = 0;
        mid = (s + e) / 2;
        cout << "mid" << mid;
        cout << endl;
        for (int i = 0; i < n; i++)
        {
            if (a[i] - lastPos >= mid)
            {
                cowCount++;
                if (cowCount == cows)
                {
                    flag = 1;
                    break;
                }
                lastPos = a[i];
            }
        }

        if (flag == 1)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}
int main()
{
    int n = 5, cows = 2;
    vector<int> v = {4, 2, 1, 3, 6};
    cout << aggCows(v, n, cows);
    return 0;
}