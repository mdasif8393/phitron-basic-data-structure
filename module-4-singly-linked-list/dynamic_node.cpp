#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next; // Node type pointer which point another node

    Node(int val) // constructor
    {
        this->val = val;
        this->next = NULL;
    }
};

int main()
{
    Node *head = new Node(10); // new Node(10) save in heap memory and return a address which save inside Node *head in stack memory
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a; // store address of a inside head next
    a->next = b;

    cout << head->next->val;

    return 0;
}