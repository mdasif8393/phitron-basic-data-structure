#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {1, 2, 3, 4, 5};

    //* myList.back(). Access the tail element.
    cout << l.back() << endl;
    //* myList.front(). Access the head element.
    cout << l.front() << endl;
    //* next(myList.begin(),i). Access the ith element

    cout << *next(l.begin(), 2);

    // list<int> my_list = {1, 3, 5, 7, 9};

    // int index = 3;
    // auto iterator_of_index = next(my_list.begin(), index);
    // cout << *iterator_of_index << endl;
    return 0;
}