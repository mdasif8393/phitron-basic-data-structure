// https://docs.google.com/document/d/1061S5CXyZwWg08xGx73KMsKkzG5uPPfq/edit
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    };
};

void print_linked_list(Node *head)
{
    int isAscending = 1;

    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val > j->val)
            {
                isAscending = 0;
            }
        };
    };

    if (isAscending == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
};

int main()
{
    Node *head = new Node(1);
    Node *a = new Node(5);
    Node *b = new Node(6);
    Node *c = new Node(8);
    Node *d = new Node(9);
    // Node *e = new Node(4);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    // d->next = e;

    print_linked_list(head);

    return 0;
}