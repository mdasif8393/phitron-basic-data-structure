#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void level_order(Node *root)
{
    if (root == NULL)
    {
        cout << "No Tree";
        return;
    }
    // Make queue to store nodes
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        //* Step 1: 1st Node ber kore ana queue theke
        Node *f = q.front();
        q.pop();
        //* Step 2: 1st Node niye kaj mane print kora node value
        cout << f->val << " ";
        //* Step 3: 1st node er children gula k Push kora queue te
        if (f->left) // if left child not null
            q.push(f->left);
        if (f->right != NULL)
            q.push(f->right);
    };
};

int main()
{
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);

    root->left = a;
    root->right = b;
    a->left = c;
    b->left = d;
    b->right = e;

    level_order(root);

    return 0;
}