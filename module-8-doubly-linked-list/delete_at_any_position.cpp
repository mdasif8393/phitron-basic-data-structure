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

void delete_at_any_position(Node *head, int idx)
{

    Node *tmp = head; // Make a temporary variable and save head inside it

    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->next; // Go to previous node of deleted node
    };

    Node *delete_node = tmp->next; // Deleted node will be temp pointer next node

    tmp->next = tmp->next->next; // store deleted next node address to temp next
    tmp->next->prev = tmp;       // Store temporary node address tp deleted next node previous

    delete delete_node; // delete deleted node
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

    delete_at_any_position(head, 1);
    print_forward(head);

    return 0;
}