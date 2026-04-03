#include <bits/stdc++.h>
using namespace std;

int main()
{
    //* myList= or myList.assign(list2.begin(),list2.end()). Assign another list.
    list<int> l = {10, 20, 30, 40, 50};
    list<int> l2;
    list<int> l3 = {100, 200};
    list<int> l4 = {100, 200, 300, 400, 500, 600, 700, 800, 200, 200};
    l2 = l;
    // l2.assign(l.begin(), l.end());

    //* myList.push_back(). Add an element to the tail.
    l.push_back(40);

    //* myList.push_front(). Add an element to the head.
    l.push_front(100);

    //* myList.pop_back(). Delete the tail.
    l.pop_back();

    //* myList.pop_front(). Delete the head.
    l.pop_front();

    //* next(myList.begin(),i). Access the ith element
    // cout << *next(l.begin(), 1);

    //* myList.insert(). Insert elements at a specific position.
    // l.insert(next(l.begin(), 2), 100);
    l.insert(next(l.begin(), 2), l3.begin(), l3.end());

    //* myList.erase(). Delete elements from a specific position.
    // l4.erase(next(l4.begin(), 2));
    // delete multiple value
    l4.erase(next(l4.begin(), 1), next(l4.begin(), 4));

    //* replace(myList.begin(),myList.end(),value,replace_value). Replace all the value with replace_value. Not under a list STL.
    replace(l4.begin(), l4.end(), 200, 2);
    // Output: 100 500 600 700 800 2 2

    //* find(myList.begin(),myList.end(),V). Find the value V. Not under a list STL.
    auto it = find(l4.begin(), l4.end(), 200);

    if (it == l4.end())
    {
        cout << "Not Found";
    }
    else
    {
        cout << "Found";
    }
    // Output: Not Found

    // for (int val : l4)
    // {
    //     cout << val << " ";
    // }

    return 0;
}