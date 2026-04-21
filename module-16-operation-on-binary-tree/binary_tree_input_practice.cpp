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

Node *binary_input()
{
    int val;
    cin >> val;

    Node *root;
    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }

    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node *leftNode, *rightNode;

        if (l == -1)
        {
            leftNode = NULL;
        }
        else
        {
            leftNode = new Node(l);
        }

        if (r == -1)
        {
            rightNode = NULL;
        }
        else
        {
            rightNode = new Node(r);
        }

        p->left = leftNode;
        p->right = rightNode;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    };

    return root;
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
    Node *root = binary_input();
    level_order(root);

    return 0;
}