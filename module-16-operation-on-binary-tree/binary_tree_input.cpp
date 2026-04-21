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

Node *input_tree()
{
    int val;
    cin >> val;

    // make root node
    Node *root;
    (val == -1) ? root = NULL : root = new Node(val);

    // make a queue and push root node here
    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        //* Step 1. Ber kore ana queue theke
        Node *p = q.front();
        q.pop();

        //* Step 2:
        // Take 2 input  from input.txt file for queue top value
        int l, r;
        cin >> l >> r;

        // Make left and right nodes
        Node *myLeft, *myRight;
        (l == -1) ? myLeft = NULL : myLeft = new Node(l);
        (r == -1) ? myRight = NULL : myRight = new Node(r);

        // connect left and right nodes
        p->left = myLeft;
        p->right = myRight;

        //* Step 3: Children push kora queue te
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
    Node *root = input_tree();
    level_order(root);

    return 0;
}