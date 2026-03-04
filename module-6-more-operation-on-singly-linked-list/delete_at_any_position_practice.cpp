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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);

    if (head == NULL)
    {
        head = newnode;
        tail = newnode; // if no node available then new node will be head & tail
        return;
    }

    tail->next = newnode; // newnode pointer address save inside tail next
    tail = newnode;       // newnode will be new tail
};

void delete_at_any_position(Node *head, int pos)
{
    Node *temp = head;

    for (int i = 1; i < pos; i++)
    {
        temp = temp->next;
    };

    Node *delete_node = temp->next;
    temp->next = temp->next->next;
    delete delete_node;
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
    Node *head = NULL; // 1st head and tail is null
    Node *tail = NULL;

    int val;

    while (true) // always run loop before break
    {
        cin >> val;    // input value
        if (val == -1) // when input -1 then break the loop
        {
            break;
        };
        insert_at_tail(head, tail, val);
    };

    delete_at_any_position(head, 2);

    print_linked_list(head);

    return 0;
}