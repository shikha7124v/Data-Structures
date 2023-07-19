//  Moore’s Voting Algorithm:
//  Approach: 
// 1. Initialize 2 variables:
//    Count –  for tracking the count of element
//    Element – for which element we are counting
// 2. Traverse through the given array.
//    -> If Count is 0 then store the current element of the array as Element.
//    -> If the current element and Element are the same increase the Count by 1.
//    -> If they are different decrease the Count by 1.
// 3. The integer present in Element should be the result we are expecting 
#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> v){
    int n = v.size();
    int cnt = 0;
    int el = 0;
    for(int i=0; i<n; i++){
        if(cnt == 0){
            cnt = 1;
            el = v[i];
        }
        else if(el == v[i]){
            cnt++;
        }
        else{
            cnt--;
        }
    }
    int cnt1 = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == el) cnt1++;
    }

    if (cnt1 > (n / 2)) return el;
    return -1;
}
int main(){
    vector<int> arr{1,2,4,3,2,1,1,1,1};
    int n = arr.size();
    cout<<majorityElement(arr);
    return 0;
}