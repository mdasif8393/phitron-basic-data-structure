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

void insert_at_head(Node *&head, int val) // get node as pointer reference and value
{
    Node *newnode = new Node(val); // make a new node with value
    newnode->next = head;          // save head pointer address to new node next.
    head = newnode;                // now head is newnode
};

void print_linked_list(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
};

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;

    insert_at_head(head, 100); // send 1st node and value that will be added
    insert_at_head(head, 200); // send 1st node and value that will be added
    insert_at_head(head, 300); // send 1st node and value that will be added
    print_linked_list(head);

    return 0;
}