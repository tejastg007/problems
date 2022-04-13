// bitwise operators
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 4, b = 6;
    cout << (a & b) << endl;   // bitwise and
    cout << (a | b) << endl;   // or
    cout << ~a << endl;        // not
    cout << (a ^ b) << endl;   // xor
    cout << (2 << 2) << endl;  // left shift 2 bits
    cout << (3 << 1) << endl;  // left shift 1 bit
   cout << (6 >> 1) << endl;  // right shift 1 bit
    cout << (6 >> 2) << endl;  // right shift 2 bit
    cout << (-6 >> 2) << endl; // right shift 2 bit of negative number

    return 0;
}