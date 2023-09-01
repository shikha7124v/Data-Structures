#include<bits/stdc++.h>
using namespace std;

int searchInsertPosition(vector<int> &arr, int ele)
{
    int n = arr.size();
    for(int i=0; i<n; i++){
        if(arr[i] >= ele){
            return i;  //Position where ele must have 
        }
    }
}
int main()
{
    vector<int> arr{1,2,4,5,7};
    int ele = 3;
    cout<<"The element "<<ele<<" should be at the index "<<searchInsertPosition(arr, ele);
    return 0;
}