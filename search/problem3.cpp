// find square root using binary search
#include <bits/stdc++.h>
using namespace std;
int sqrt()
{
    int n, s, e, mid;
    cin >> n;
    s = 0, e = n - 1;
    while (s <= e)
    {
        mid = (s + e) / 2;
        if (mid * mid == n)
            return mid;
        else if (mid * mid < n)
            s = mid + 1;
        else if (mid * mid > n)
            e = mid - 1;
    }
    return -1;
}
int main()
{
    cout << endl;
    cout << sqrt();
    return 0;
}