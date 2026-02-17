#include <bits/stdc++.h>
using namespace std;

void fun(int *&p) // pointer pass by reference to change value in main function too
{
    p = NULL; // change pointer value to null
};

int main()
{
    int x = 10;
    int *p = &x; // create a *p pointer and save x variable address to *p pointer

    fun(p);

    cout << "In main function: " << p << endl; // pointer value change to null in fun function

    return 0;
}