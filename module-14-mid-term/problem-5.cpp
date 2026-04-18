//* Problem Link: https://www.hackerrank.com/contests/mid-term-exam-a-basic-data-structures-a-batch-08/challenges/browser-history-1

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string val;
    Node *next;
    Node *prev;

    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

Node *visit_address(Node *head, string address)
{
    Node *temp = head;

    while (temp != NULL)
    {
        if (temp->val == address)
        {
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        string s;
        cin >> s;

        if (s == "end")
            break;

        Node *newNode = new Node(s);

        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    int x;
    cin >> x;

    Node *current = head;

    while (x--)
    {
        string c;
        cin >> c;

        if (c == "visit")
        {
            string address;
            cin >> address;

            Node *found = visit_address(head, address);

            if (found != NULL)
            {
                current = found;
                cout << current->val << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (c == "next")
        {
            if (current->next != NULL)
            {
                current = current->next;
                cout << current->val << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (c == "prev")
        {
            if (current->prev != NULL)
            {
                current = current->prev;
                cout << current->val << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}