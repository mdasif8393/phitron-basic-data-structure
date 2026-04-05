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

void reverse_linked_list(Node *&head, Node *&tail, Node *temp) // get head as head and head as temp
{

    if (temp->next == NULL) // go to last node and recursion break condition
    {
        head = temp; // last node will be head
        return;
    }

    reverse_linked_list(head, tail, temp->next); // again call recursion with head and temp
    temp->next->next = temp;                     // connect next node with previous node
    temp->next = NULL;                           // make 1st node next null
    tail = temp;
};

void print_linked_list(Node *&head)
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

    reverse_linked_list(head, tail, head);
    print_linked_list(head);

    return 0;
}