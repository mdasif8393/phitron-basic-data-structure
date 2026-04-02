#include <bits/stdc++.h>
using namespace std;

int main()
{
    //* myList.size(). Returns the size of the list.
    list<int> l1 = {1, 2, 3, 4, 5, 6};
    // cout << l1.size();
    // Output: 6

    //* myList.max_size(). Returns the maximum size that the list can hold.
    // cout << l1.max_size();
    // oUTPUT: 768614336404564650

    //* myList.clear().Clears the list elements.
    // l1.clear();
    // cout << l1.size();

    //* myList.empty(). Return true/false if the list is empty or not.
    // cout << l1.empty();
    // Output: 0

    //* myList.resize(). Change the size of the list.
    l1.resize(10, 1);
    for (int val : l1)
    {
        cout << val << " ";
    }

    return 0;
}