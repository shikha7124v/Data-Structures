// we have to return the longest length of the successive elemets, for ex arr=1,2,101,1,102,3,4
// there are two successive sequences such as, 101,102 and 1,2,3,4 so the longest length is 4
#include<bits/stdc++.h>
using namespace std;

bool linearSearch(vector<int> arr, int num){
    int n = arr.size();
    for(int i=0; i<n; i++){
        if(arr[i] == num){
            return true;
        }
    }
    return false;
}
int longestSuccessiveSeq(vector<int> arr){
    int n = arr.size();
    int maxLen = 1;
    for(int i=0; i<n; i++){
        int x = arr[i];
        int cnt = 1;
        while(linearSearch(arr, x+1) == true){
            x += 1;
            cnt += 1;
        }
        maxLen = max(maxLen, cnt);
    }
    return maxLen;
}
int main()
{
    vector<int> arr{100, 200, 1, 2, 3, 4};
    int ans = longestSuccessiveSeq(arr);
    cout<<ans;
    return 0;
}