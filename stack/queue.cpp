// queue implmentation
#include <bits/stdc++.h>
using namespace std;
#define n 5
class Queue
{

public:
    int first, last, *a;
    Queue()
    {
        // cin >> n;
        first = last = -1;
        a = new int[n];
    }

    void insert(int el)
    {
        if (first == -1)
        {
            first = 0;
        }
        if (last == n - 1)
        {
            cout << "queue full" << endl;
            return;
        }
        last++;
        a[last] = el;
        cout << "element inserted" << endl;
        return;
    }

    void del()
    {
        if (first == -1)
        {
            cout << "queue empty" << endl;
            return;
        }
        if (first == last)
        {
            cout << "element deleted " << a[first] << endl;
            first = last = -1;
            return;
        }

        cout << "element deleted " << a[first] << endl;
        first++;
        return;
    }

    void print()
    {
        if (first == -1)
        {
            cout << "empty quee" << endl;
            return;
        }
        for (int i = first; i <= last; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        return;
    }
};

int main()
{
    Queue q;
    q.insert(1);
    q.insert(2);
    q.insert(3);
    q.insert(4);
    q.insert(5);
    q.insert(6);
    q.print();
    q.del();
    q.del();
    q.del();
    q.del();
    q.print();
    return 0;
}