#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int arr[] = {12, 3, 4, 6};
    int n = sizeof(arr) / sizeof(int);
    int k = 2;

    set<int> s(arr, arr + n);
    // s.begin() returns a pointer to first
    //  elements in the set

    set<int>::iterator itr = s.begin();
    advance(itr, k - 1); // itr points to kth element in set
    cout << *itr << "\n";
    return 0;
}

