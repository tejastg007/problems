// find maximum and minimum element in array
#include <bits/stdc++.h>
using namespace std;
int findMax(int a[], int n)
{
    int maxi = a[0];
    for (int i = 0; i < n; i++)
    {
        // prebuilt function to find maximum
        maxi = max(maxi, a[i]);
        // if (a[i] > maxi)
        //     maxi = a[i];
    }
    return maxi;
}
int findMin(int a[], int n)
{
    int mini = a[0];
    for (int i = 0; i < n; i++)
    {
        mini=min(mini,a[i]);

        // if (a[i] < mini)
        //     mini = a[i];
    }
    return mini;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "maxi -> " << findMax(a, n) << endl;
    cout << "mini -> " << findMin(a, n) << endl;
    return 0;
}