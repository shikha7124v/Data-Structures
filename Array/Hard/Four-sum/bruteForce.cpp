#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target)
{
    int n = nums.size();
    set<vector<int>> st;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                for(int l=k+1; l<n; l++){
                    long long sum = nums[i] + nums[j];
                    sum += nums[k];
                    sum += nums[l];

                    if(sum == target){
                        vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                        sort(temp.begin(), temp.end());
                        st.insert(temp);
                    }
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

int main()
{
    vector<int> nums = {4,3,3,4,4,2,1,2,1,1};
    int target = 9;
    vector<vector<int>> ans = fourSum(nums, target);
    cout<<"The quadruplets are: ";
    for(auto it: ans){
        cout<<"[";
        for(auto ele: it){
            cout<<ele<<" ";
        }
        cout<<"]";
    }
    cout<<endl;
    return 0;
}