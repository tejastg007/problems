// given the array of elements from 1 to n-1. only one element is present twice in the array. find that element. elements are in sequential manner and always starts from 1.
// intput- a={1,2,3,4,4}

// solution-
// first- xor all elements so that the dupilicate element will be canceled and other element will be XORed.
// then- again XOR the above output with 1 to n-1 elements. so that, the unique elements will be cancled. the duplicate element is present only once in the 1to n-1 list so its the final remaining elemet which is the answer.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    // input elements
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // XOR operation
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans ^= a[i];
    }

    // XOR again with 0 to n-1 elements
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ i;
    }
    cout << ans;
}