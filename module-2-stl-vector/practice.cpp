#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v3 = {10, 20, 30, 40, 50};
    v3.insert(v3.begin() + 3, 111);
    for (int x : v3)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}