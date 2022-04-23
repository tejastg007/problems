// selection sort-
//  what- pick smallest element from every round/pass and put it in correct place
// make every round elements less by 1 than previous round
// swapping is done to place the minimum element in its right place
//  there are multiple passes- n-1 passes where n is no of elements in array
// time complexity- o(n^2);
// usecases- when array size is small
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5, a[n] = {64, 25, 12, 22, 11};

    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
                min = j;
        }
        swap(a[min], a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}