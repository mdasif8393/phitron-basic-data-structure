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

void insert_at_any_position(Node *&head, int idx, int val)
{
    Node *newnode = new Node(val); // make a new node

    Node *temp = head; // save head address inside temp

    for (int i = 1; i < idx; i++) // go to previous index where we want to add a new node
    {
        temp = temp->next; // save node address to temp
    };

    newnode->next = temp->next; // save temp next address to newnode next address
    temp->next = newnode;       // save new node address to temp next
};

void print_linked_list(Node *&head)
{

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    };
};

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;

    insert_at_any_position(head, 2, 100); // want to add 100 in position 4
    insert_at_any_position(head, 2, 200); // want to add 100 in position 4
    print_linked_list(head);

    return 0;
}