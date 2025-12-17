#include <bits/stdc++.h>
using namespace std;

int main()
{
    //* Type 1: (v= or v.assign()) Assign one vector to another
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v2;

    // v2.assign(v1);
    v2 = v1;
    // use this for loop when do not work with index
    for (int x : v2)
    {
        cout << x << " ";
    }
    cout << endl;

    //* Type 2: (v.push_back()) Add an element to the end.
    v2.push_back(6);
    for (int x : v2)
    {
        cout << x << " ";
    }
    cout << endl;

    //* Type 3: (v.pop_back()) Remove the last element.
    v2.pop_back();
    for (int x : v2)
    {
        cout << x << " ";
    }
    cout << endl;

    //* Type 4: (v.insert(pos, value)) Insert elements at a specific position.
    // v1.insert(v1.begin() + 2, 100);

    vector<int> v3 = {10, 20, 30, 40, 50};
    v1.insert(v1.begin() + 3, v3.begin() + 1, v3.end() - 1);
    for (int x : v1)
    {
        cout << x << " ";
    }
    cout << endl;

    //* Type 5: (v.erase(pos)) Delete elements from a specific position.
    // v1.erase(v1.begin() + 2);

    v1.erase(v1.begin() + 3, v1.begin() + 6);
    for (int x : v1)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}