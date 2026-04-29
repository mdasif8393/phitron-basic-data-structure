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

void middle_element_linked_list(Node *head)
{
    int count = 0;

    Node *temp = head;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    int div = count / 2;
    int rem = count % 2;

    if (rem > 0)
    {
        div++;
    }

    Node *temp2 = head;
    for (int i = 1; i < div; i++)
    {
        temp2 = temp2->next;
    }
    if (rem == 0)
    {
        cout << temp2->val << " " << temp2->next->val;
    }
    else
    {
        cout << temp2->val;
    }
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

    middle_element_linked_list(head);

    return 0;
}