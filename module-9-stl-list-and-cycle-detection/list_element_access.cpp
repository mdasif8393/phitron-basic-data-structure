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

    return 0;
}