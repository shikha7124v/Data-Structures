#include<bits/stdc++.h>
using namespace std;

void moveZeros(vector<int> &nums, int n){
    int j = -1;
    for(int i = 0; i<n; i++){
        if(nums[i] == 0){
            j = i;
            break;
        }
    }
    if(j == -1){
        return;
    }
    for(int i = j+1; i<n; i++){
        if(nums[i] != 0){
            swap(nums[i], nums[j]);
            j++;
        }
    }
}
int main()
{
    vector<int> nums{0,1,6,4,3,0};
    int n = nums.size();

    for(auto x: nums){
        cout<<x<<" ";
    }
    cout<<endl;
    moveZeros(nums, n);
    for(auto x: nums){
        cout<<x<<" ";
    }
    return 0;
}