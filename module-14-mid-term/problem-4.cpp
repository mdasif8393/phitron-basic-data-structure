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

// print forward
void print_forward(Node *head)
{
    cout << "L -> ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

// print backward
void print_backward(Node *tail)
{
    cout << "R -> ";
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

// size
int get_size(Node *head)
{
    int cnt = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

void insert_at_any_position(Node *&head, Node *&tail, int idx, int val)
{
    int sz = get_size(head);

    if (idx > sz)
    {
        cout << "Invalid" << endl;
        return;
    }

    Node *new_node = new Node(val);

    if (idx == 0)
    {
        if (head == NULL)
        {
            head = tail = new_node;
        }
        else
        {
            new_node->next = head;
            head->prev = new_node;
            head = new_node;
        }
    }

    else if (idx == sz)
    {
        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
    }

    else
    {
        Node *temp = head;

        for (int i = 1; i < idx; i++)
        {
            temp = temp->next;
        }

        temp->next->prev = new_node;
        new_node->next = temp->next;

        temp->next = new_node;
        new_node->prev = temp;
    }

    print_forward(head);
    print_backward(tail);
}

int main()
{
    int q;
    cin >> q;

    Node *head = NULL;
    Node *tail = NULL;

    while (q--)
    {
        int x, v;
        cin >> x >> v;

        insert_at_any_position(head, tail, x, v);
    }

    return 0;
}