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
    }
};

void add_node_at_head(Node *&head, int val)
{
    Node *new_node = new Node(val);

    if (head == NULL)
    {
        head = new_node;
        return;
    };

    new_node->next = head;
    head = new_node;
};

void add_node_at_tail(Node *&head, Node *&tail, int val)
{
    Node *new_node = new Node(val);

    if (head == NULL)
    {
        head = new_node;
        tail = new_node;

        return;
    };

    tail->next = new_node;
    tail = new_node;
};

void insert_at_any_position(Node *&head, int pos, int val)
{
    Node *new_node = new Node(val);

    if (head == NULL)
    {
        head = new_node;
        return;
    };

    Node *temp = head;
    for (int i = 1; i < pos; i++)
    {
        temp = temp->next;
    };

    new_node->next = temp->next;
    temp->next = new_node;
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
    Node *tail = new Node(40);

    head->next = a;
    a->next = b;
    b->next = tail;

    add_node_at_head(head, 100);
    add_node_at_head(head, 101);

    add_node_at_tail(head, tail, 200);
    add_node_at_tail(head, tail, 201);

    insert_at_any_position(head, 3, 300);

    print_linked_list(head);

    return 0;
}