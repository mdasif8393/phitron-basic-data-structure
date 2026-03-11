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

void insert_at_head(Node *&head, int val) // get head & value
{
    Node *new_node = new Node(val); // create a new node with value

    new_node->next = head; // new node next will be head pointer
    head->prev = new_node; // head previous will be new node pointer
    head = new_node;       // make new node as head
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

    insert_at_head(head, 100);
    print_forward(head);

    return 0;
}