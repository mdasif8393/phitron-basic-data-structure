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

void insert_at_tail(Node *&head, int val)
{
    Node *newnode = new Node(val); // make a new node

    if (head == NULL) // check if head is empty then head will be the new node
    {
        head = newnode;
        return;
    }

    Node *tmp = head;         // make a temporary pointer and save head pointer address here
    while (tmp->next != NULL) // when temporay pointer next is not null then
    {
        tmp = tmp->next; // temporay pointer will bee next temporay pointer
    }
    tmp->next = newnode; // save new node pointer address to temporay next
};

void print_linked_list(Node *head)
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

    insert_at_tail(head, 100); // call insert at tail function
    insert_at_tail(head, 200);

    print_linked_list(head);

    return 0;
}