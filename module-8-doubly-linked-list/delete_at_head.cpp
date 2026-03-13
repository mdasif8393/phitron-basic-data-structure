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

void delete_at_head(Node *&head, Node *&tail)
{

    Node *delete_node = head; // store head inside delete node pointer
    head = head->next;        // make next node as head
    delete delete_node;       // now delete previous head

    if (head == NULL) // check if previous (existing) head next node is Null?
    {
        tail = NULL; // if previous head next (existing) node is null then make tail null
        return;
    };

    head->prev = NULL; // make head previous pointer null
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

    delete_at_head(head, tail);
    print_forward(head);

    return 0;
}