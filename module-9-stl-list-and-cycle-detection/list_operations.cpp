#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {10, 20, 10, 20, 40, 50, 60, 70, 80, 30, 40};
    //* myList.remove(V).Remove the value V from the list.
    l.remove(10);

    //* myList.sort(). Sort the list in ascending order.
    l.sort();

    //* myList.sort(greater<type>()).Sort the list in descending order
    l.sort(greater<int>());

    //* myList.unique(). Deletes the duplicate values from the list. You must sort the list first.
    l.unique();

    //* myList.reverse(). Reverse the list.
    l.reverse();

    for (int val : l)
    {
        cout << val << " ";
    }

    return 0;
}