// complement of the base 10
//  for ex. input = 10 ->1010->0101-> output - 5
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int ans = 0, bit, i = 0, n;
    // cin >> n;
    // do
    // {
    // if(n & 1){
    //     bit=0;
    // }else{
    //     bit=1;
    // }
    // if(bit)
    //     ans= ans+(pow(2,i));
    // i++;
    // the shorter version is below-
    // from this
    //     if ((n & 1 )!= 1)
    //     {
    //         cout << (n & 1);
    //         ans = ans + (pow(2, i));
    //     }
    // to this//
    //     i++;
    //     n = n >> 1;
    // } while (n != 0);
    // cout << ans;

    // another code for same problem
    int m, n, mask = 0, ans;
    cin >> n;
    m = n;
    do
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    } while (m != 0);
    ans = n ^ mask;
    cout << ans;
    return 0;
}