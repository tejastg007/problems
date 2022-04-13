// convert decimal to binary
// 123 -> 321
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int no, binary = 0, bit, i = 0;
    cin>>no;
    while (no)
    {
        bit = no & 1;
        binary = bit * (pow(10, i)) + binary;
        no = no >> 1;
        i++;
    }
    cout << binary;
    return 0;
}