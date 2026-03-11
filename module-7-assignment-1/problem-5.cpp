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

void delete_duplicate(Node *&head)
{
    Node *current_node = head;

    while (current_node != NULL)
    {
        Node *temp = current_node;

        while (temp->next != NULL)
        {
            if (temp->next->val == current_node->val)
            {
                Node *deleteNode = temp->next;
                temp->next = temp->next->next;
                delete deleteNode;
            }
            else
            {
                temp = temp->next;
            }
        }

        current_node = current_node->next;
    }
}

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

    delete_duplicate(head);
    print_linked_list(head);

    return 0;
}