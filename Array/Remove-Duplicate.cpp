//Remove Duplicates for the sorted array

#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums){
    if(nums.size() == 0){
        return 0;
    }
    int i=0; 
    for(int j=1; j<nums.size(); j++){
        if(nums[j] != nums[i]){
            i++;
            nums[i] = nums[j];
        }
    }
    return i+1;  //length of the sorted array after removing the duplicates
}
int main()
{
    vector<int> nums = {1,1,2,3,3,4,4,4};
    int k = removeDuplicates(nums);
}