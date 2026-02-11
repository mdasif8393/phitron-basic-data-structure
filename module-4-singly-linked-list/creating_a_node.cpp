#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next; // next is a Node type pointer

    Node(int val)
    {
        this->val = val;
        this->next = NULL; // initially set null to all next
    };
};

int main()
{
    Node a(10), b(20), c(30);

    a.next = &b; // a.next save address of b
    b.next = &c;
    // c.next = NULL; ////No need to do this because inside constructor we set all next null

    cout << a.val << " " << (*a.next).val << " " << b.next->val; // dereference a.next to get value of b and b.next to get value of c

    return 0;
}