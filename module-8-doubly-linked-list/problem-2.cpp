#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *prev;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *new_node = new Node(val);

    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }

    tail->next = new_node;
    new_node->prev = tail;
    tail = new_node;
}

void reverse(Node *&head, Node *&tail)
{
    Node *temp1 = head;
    Node *temp2 = tail;

    while (temp1 != NULL)
    {
        swap(temp1->prev, temp1->next);
        temp1 = temp1->prev;
    }

    Node *tmp = head;
    head = tail;
    tail = tmp;

    temp1 = head;

    while (temp1 != NULL)
    {
        cout << temp1->val << " ";
        temp1 = temp1->next;
    }
};

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    reverse(head, tail);

    return 0;
}