#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void delete_at_tail(Node *&head, Node *&tail)
{

    Node *delete_node = tail; // Point tail to a new pointer delete_tail.
    tail = tail->prev;        // Make tail previous node as tail
    delete delete_node;       // Now delete tail pointer delete_tail

    if (tail->prev == NULL) // Check that if tail previous node is null or not
    {
        head = NULL; // If null then make head as null
        return;
    };

    tail->next = NULL; // Make tail next null
};

// print from head
void print_forward(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
};

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;

    a->prev = head;
    a->next = tail;

    tail->prev = a;

    delete_at_tail(head, tail);
    print_forward(head);

    return 0;
}