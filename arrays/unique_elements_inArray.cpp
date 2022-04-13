// array is given with M elements for two times and one is unique. find unique element. i.e. size of array is (2M+1)

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, u, i, j;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // u = a[0];
    // for (i = 0; i < n; i++)
    // {
    //     for (j = 0; j < n; j++)
    //     {
    //         if (a[i] == a[j] && i != j)
    //         {
    //             u = a[i + 1];
    //             break;
    //         }
    //     }
    //     if (j == n)
    //     {
    //         cout << "uniqye element is " << u;
    //         break;
    //     }
    // }
    // cout << endl;

    // easy method by XOR operation-.
    // XOR cancels similar elements. eg. 1^2^1= 2 bcz 1 and 1 gets canceled.
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ a[i];
    }
    cout << ans;
    return 0;
}