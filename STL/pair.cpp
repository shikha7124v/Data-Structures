#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, int> p = {1,3};
    cout<<p.first<<" "<<p.second<<endl;
    
    /* this statement is correct but vs code is not updated
    pair<int, pair<int, int>> p1 = {1, {1,3}};
    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second; */     
    
    pair<int, int> arr[] = {{1,2}, {3,4}, {5,6}};
    cout<<arr[1].second;
    return 0;
}