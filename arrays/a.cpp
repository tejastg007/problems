// array demonstration
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // array can be intiialized to 0 only by default.
    // int a[10] = {0};

    // to initialize array with any other value, follow below method
    // std::fill_n(array,n,value)
    int a[10];
    std::fill_n(a, 10, 1);
    cout<<sizeof(a)/4;
    // cout << 9[a]; //valid
    // cout << a[9]; //valid
    // cout << a[1];
    return 0;
}