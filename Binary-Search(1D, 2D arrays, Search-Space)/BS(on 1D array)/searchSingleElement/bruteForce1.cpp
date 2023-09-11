#include<bits/stdc++.h>
using namespace std;

int singleNonDuplicate(vector<int>& arr)
{
	// Write your code here
	int n = arr.size();
	for(int i=0; i<n; i = i+2){
		if(arr[i] != arr[i+1]){
			return arr[i];
		}
	}
}

int main()
{
    vector<int> arr{1,1,2,2,3,3,4,5,5,6,6};
    cout<<singleNonDuplicate(arr);
    return 0;
}