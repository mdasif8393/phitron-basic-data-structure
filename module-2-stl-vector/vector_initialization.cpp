#include <bits/stdc++.h>
using namespace std;

int main()
{ // Type 1: vector initialization without size and value
    vector<int> v1;
    cout << v1.size() << endl;
    vector<char> v2;
    vector<float> v3;
    vector<long long> v4;

    // Type 2:  initialize vector with size
    vector<int> v5(10);
    vector<char> v6(20);
    vector<double> v7(30);
    cout << v7.size() << endl;

    // Type3: Initialize vector with size and value
    vector<int> v8(10, 4);
    vector<char> v9(8, 'a');

    for (int i = 0; i < v8.size(); i++)
    {
        cout << v8[i] << " ";
    }
    cout << endl;

    // Type 4: initialize a vector and copy value from another vector
    vector<int> v10(v8);
    for (int i = 0; i < v8.size(); i++)
    {
        cout << v8[i] << " ";
    }
    cout << endl;

    // Type 5: initialize a vector where copy values from an array with array 1st index and array ending index
    int a[5] = {1, 2, 3, 4, 5};
    vector<int> v11(a, a + 5);
    for (int i = 0; i < 5; i++)
    {
        cout << v11[i] << " ";
    }

    // Type 6: Declare vector with values
    vector<int> v12 = {1, 2, 3, 4, 5};

    return 0;
}