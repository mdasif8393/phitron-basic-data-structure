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
    }
};

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = a; // cycle will detect here

    Node *slow = head;
    Node *fast = head;

    bool flag = false;

    while (fast != NULL && fast->next != NULL) // when even number of node then if fast is null then break the loop and for odd number of nodes when last node is fast node then break the loop
    {
        slow = slow->next;       // slow go to next node
        fast = fast->next->next; // fast go to next -> next node

        if (slow == fast) // when fast and slow node come to same position then break the loop and detect cycle
        {
            // detect cycle
            flag = true;
            break;
        }
    };

    if (flag == true)
    {
        cout << "Cycle Detected";
    }
    else
    {
        cout << "No Cycle detected";
    }

    return 0;
}