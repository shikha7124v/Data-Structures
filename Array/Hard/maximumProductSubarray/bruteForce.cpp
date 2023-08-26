#include<bits/stdc++.h>
using namespace std;

int maxProdSubarray(vector<int> nums){
    int n = nums.size();
    if(n==0){
        return 0;
    }
    if(n==1){
        return nums[0];
    }
    int result = INT_MIN;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int prod = 1;
            for(int k=i; k<=j; k++){
                prod *= nums[k];
            }
            result = max(result, prod);
        }
    }
    int maxele = INT_MIN;
    if(result == 0){
        for(int i=0; i<n; i++){
            maxele = max(maxele, nums[i]);
        }
        if(maxele > result){
            result = maxele;
        }
    }
    return result;
}
int main()
{
    vector<int> nums{-1,2,4,0,-4,3};
    cout<<maxProdSubarray(nums);
    return 0;
}