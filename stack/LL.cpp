// linked list using c++
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
void print(Node *node)
{
    while (node != NULL)
    {
        cout << node->data;
        node = node->next;
    }
}
void insert(Node **head, int n)
{
    Node *node = new Node();
    node->data = n;
    node->next = *head;
    *head = node;
}
int main()
{
    Node *head, *second, *third;
    head = new Node();
    second = new Node();
    third = new Node();
    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;
    insert(&head, 4);
    print(head);
    return 0;
}