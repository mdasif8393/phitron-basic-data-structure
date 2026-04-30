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

void check_palindrome(Node *head, Node *tail)
{
    Node *temp1 = head;
    Node *temp2 = tail;
    int count = 0;

    while (temp1 != NULL)
    {
        count++;
        temp1 = temp1->next;
    }

    temp1 = head;
    int countDiv = count / 2;

    int isPalindrome = 1;

    for (int i = 1; i <= countDiv; i++)
    {
        if (temp1->val != temp2->val)
        {
            isPalindrome = 0;
            break;
        }
        temp1 = temp1->next;
        temp2 = temp2->prev;
    }

    if (isPalindrome)
        cout << "YES\n";
    else
        cout << "NO\n";
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

    check_palindrome(head, tail);

    return 0;
}