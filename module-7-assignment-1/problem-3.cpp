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

void get_difference(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    };

    if (count == 1)
    {
        cout << 0;
    }
    else
    {
        Node *temp1 = head;

        int max = INT_MIN;
        while (temp1 != NULL)
        {
            if (temp1->val > max)
            {
                max = temp1->val;
            }
            temp1 = temp1->next;
        }

        Node *temp2 = head;
        int min = INT_MAX;
        while (temp2 != NULL)
        {
            if (temp2->val < min)
            {
                min = temp2->val;
            }
            temp2 = temp2->next;
        }

        cout << max - min;
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
    get_difference(head);

    return 0;
}