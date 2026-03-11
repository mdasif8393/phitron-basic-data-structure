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

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *new_node = new Node(val);

    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }

    new_node->next = head;
    head = new_node;
}

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
    tail = new_node;
}

void delete_linked_list(Node *&head, Node *&tail, int pos)
{
    if (head == NULL)
        return;

    if (pos == 0)
    {
        Node *delete_node = head;
        head = head->next;

        if (head == NULL)
            tail = NULL;

        delete delete_node;
        return;
    }

    Node *temp = head;

    for (int i = 1; i < pos; i++)
    {
        if (temp->next == NULL)
        {
            return;
        }
        temp = temp->next;
    }

    if (temp->next == NULL)
    {
        return;
    }

    Node *delete_node = temp->next;
    temp->next = temp->next->next;

    if (delete_node == tail)
        tail = temp;

    delete delete_node;
};

void print_linked_list(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    };
    cout << endl;
};

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int pos, val;

        cin >> pos >> val;
        if (pos == 0)
        {
            insert_at_head(head, tail, val);
            print_linked_list(head);
        }
        else if (pos == 1)
        {
            insert_at_tail(head, tail, val);
            print_linked_list(head);
        }
        else if (pos == 2)
        {
            delete_linked_list(head, tail, val);
            print_linked_list(head);
        }
    }

    return 0;
}