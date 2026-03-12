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

void insert_at_any_position(Node *head, int idx, int val)
{
    Node *new_node = new Node(val); // make  a new node which we want to insert

    Node *temp = head;

    for (int i = 1; i < idx; i++)
    {
        temp = temp->next; // go to previous node where we want to insert new node
    }

    temp->next->prev = new_node; // connect next node previous pointer with new node
    new_node->next = temp->next; // connect new node next pointer with next node
    temp->next = new_node;       // connect temp next with new node
    new_node->prev = temp;       // connect new node previous with temp
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

    insert_at_any_position(head, 2, 100);
    print_forward(head);

    return 0;
}