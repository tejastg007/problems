// swap alternative numbers in array

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // start from a[1] and swap with previous element
    for (int i = 1; i < n; i = i + 2)
    {
        swap(a[i], a[i - 1]);
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}