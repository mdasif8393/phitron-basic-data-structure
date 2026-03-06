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
    int count = 0;

    for (Node *i = head; i != NULL; i = i->next)
    {
        count++;
    };

    int div = count / 2;
    int rem = count % 2;

    if (rem != 0)
    {
        Node *temp = head;

        for (int i = 1; i <= div; i++)
        {
            temp = temp->next;
        }
        cout << temp->val;
    }
    else
    {
        Node *temp = head;

        for (int i = 1; i < div; i++)
        {
            temp = temp->next;
        }
        cout << temp->val << " " << temp->next->val;
    }

    // cout << div << " " << rem;
    ;
};

int main()
{
    Node *head = new Node(1);
    Node *a = new Node(2);
    Node *b = new Node(3);
    Node *c = new Node(4);
    Node *d = new Node(5);
    Node *e = new Node(6);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    print_linked_list(head);

    return 0;
}