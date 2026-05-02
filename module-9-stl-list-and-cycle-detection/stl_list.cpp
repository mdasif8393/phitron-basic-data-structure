#include <bits/stdc++.h>
using namespace std;

int main()
{
    //* list<type>myList // Construct a list with 0 elements // O(1)
    list<int> l;

    //* list<type>myList(N); // Construct a list with N elements and the value will be garbage.
    list<int> l2(4);

    //* list<type>myList(N,V); //Construct a list with N elements and the value will be V.
    list<int> l3(10, 3);
    for (int val : l3)
    {
        cout << val << " ";
    }

    //* use iterator to print linked list
    for (auto it = l3.begin(); it != l3.end(); it++)
    {
        // cout << *it << " ";
    }
    // Output: 3 3 3 3 3 3 3 3 3 3

    //* use range based for loop to print
    for (int val : l3)
    { // integer value val come from list l3
      // cout << val << " ";
    }
    // Output: 3 3 3 3 3 3 3 3 3 3

    //* list<type>myList(list2); //Construct a list by copying another list list2.
    list<int> l4 = {1, 2, 3, 4, 5, 6};
    list<int> l5(l4);
    for (int val : l5)
    {
        // cout << val << " ";
    }
    // Output: 1 2 3 4 5 6

    //* list<type>myList(A,A+N); //Construct a list by copying all elements from an array A of size N.
    int a[] = {1, 2, 3};
    list<int> l6(a, a + 3); // (a, a+3) is array and size of array

    for (int val : l6)
    {
        // cout << val << " ";
    }

    //* list<type>myList(v.begin(),v.end()); Construct a list by copying all elements from a vector v.

    vector<int> v = {1, 2, 3, 4, 5};
    list<int> l7(v.begin(), v.end());

    for (int val : l7)
    {
        // cout << val << " ";
    }

    return 0;
}