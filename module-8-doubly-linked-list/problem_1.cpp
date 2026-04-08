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
    };

    tail->next = new_node;
    new_node->prev = tail;
    tail = new_node;
};

void compare_linked_lists(Node *head_1, Node *head_2)
{

    Node *temp_1 = head_1;
    Node *temp_2 = head_2;

    int count_1 = 0;
    int count_2 = 0;

    while (temp_1 != NULL)
    {
        count_1++;
        temp_1 = temp_1->next;
    }
    while (temp_2 != NULL)
    {
        count_2++;
        temp_2 = temp_2->next;
    }

    if (count_1 != count_2)
    {
        cout << "NO";
        return;
    }

    temp_1 = head_1;
    temp_2 = head_2;

    while (temp_1 != NULL && temp_2 != NULL)
    {
        if (temp_1->val != temp_2->val)
        {
            cout << "NO";
            return;
        }
        temp_1 = temp_1->next;
        temp_2 = temp_2->next;
    }

    cout << "YES";
};

void display_linked_list(Node *head)
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
    Node *head_1 = NULL;
    Node *tail_1 = NULL;

    int val_1;

    while (true)
    {
        cin >> val_1;
        if (val_1 == -1)
        {

            break;
        }
        insert_at_tail(head_1, tail_1, val_1);
    }

    Node *head_2 = NULL;
    Node *tail_2 = NULL;

    int val_2;

    while (true)
    {
        cin >> val_2;
        if (val_2 == -1)
        {

            break;
        }
        insert_at_tail(head_2, tail_2, val_2);
    }

    compare_linked_lists(head_1, head_2);

    return 0;
}