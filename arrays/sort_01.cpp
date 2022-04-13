// sort the 0 and 1 of the array.
#include <bits/stdc++.h>
using namespace std;
void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i];
}
int main()
{
    int n = 8, a[n] = {1, 1, 0, 0, 0, 0, 1, 0}, i = 0, j = n - 1;
    while (i < j)
    {
        cout << endl;
        while (a[i] == 0)
            i++;
        while (a[j] == 1)
            j--;

        if (i < j)
            swap(a[i], a[j]);
        i++;
        j--;
    }

    print(a, n);
    return 0;
}