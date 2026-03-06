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

void add_to_tail(Node *&head, Node *&tail, int val)
{

    Node *newNode = new Node(val);

    Node *temp = head;

    if (temp == NULL)
    {
        head = newNode;
        tail = newNode;
    }

    tail->next = newNode;
    tail = newNode;
};

void compare_linked_list(Node *&head1, Node *&head2)
{
    Node *temp1 = head1;
    int count_1 = 0;
    while (temp1 != NULL)
    {
        count_1++;
        temp1 = temp1->next;
    }

    Node *temp2 = head2;
    int count_2 = 0;
    while (temp2 != NULL)
    {
        count_2++;
        temp2 = temp2->next;
    }

    if (count_1 == count_2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
};

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;

    Node *head2 = NULL;
    Node *tail2 = NULL;

    int val;

    while (true)
    {
        cin >> val;

        if (val == -1)
        {
            break;
        }

        add_to_tail(head1, tail1, val);
    }

    while (true)
    {
        cin >> val;

        if (val == -1)
        {
            break;
        }

        add_to_tail(head2, tail2, val);
    }

    compare_linked_list(head1, head2);

    return 0;
}