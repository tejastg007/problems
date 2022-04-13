// stack implimentation
#include <bits/stdc++.h>
using namespace std;
class Stack
{
public:
    int n, *a, top;
    Stack()
    {
        cin >> n;
        a = new int[n];
        top = -1;
    }
    void push(int el)
    {
        if (top == n - 1)
        {
            cout << "stack overflow" << endl;
            return;
        }
        top++;
        a[top] = el;
        cout << "element inserted" << endl;
        return;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "stack emtpy" << endl;
            return;
        }
        cout << "popped element " << a[top] << endl;
        top--;
        return;
    }

    void print()
    {
        if (top == -1)
        {
            cout << "stack emtpy" << endl;
            return;
        }
        for (int i = top; i >= 0; i--)
        {
            cout << a[i] << endl;
        }
    }
};

int main()
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    // st.pop();
    // st.pop();
    st.print();
    return 0;
}