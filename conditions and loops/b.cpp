// find no. is positive,negative or zero
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    cin >> i;
    if (i < 0)
        cout << "negaitve" << endl;
    else if (i > 0)
        cout << "positive" << endl;
    else
        cout << "no is zero" << endl;
    return 0;
}