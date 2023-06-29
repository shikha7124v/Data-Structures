#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);

    v.emplace_back(3);  //emplace_back do the same function as push_back but it is little faster 
    
    return 0;
}