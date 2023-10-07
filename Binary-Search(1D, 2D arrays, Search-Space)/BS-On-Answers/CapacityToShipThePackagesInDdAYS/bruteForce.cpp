// Capacity to ship packages with d days
// Problem Statement: You are the owner of a Shipment company. You use conveyor belts to ship packages from one port to another. The packages must be shipped within ‘d’ days.
// The weights of the packages are given in an array ‘of weights’. The packages are loaded on the conveyor belts every day in the same order as they appear in the array. The loaded weights must not exceed the maximum weight capacity of the ship.
// Find out the least-weight capacity so that you can ship all the packages within ‘d’ days.
#include<bits/stdc++.h>
using namespace std;

int findDays(vector<int>&arr, int cap){
    int days = 1;
    int load = 0; 
    int n = arr.size();
    for(int i=0; i<n; i++){
        if(load + arr[i] > cap){
            days += 1;
            load = arr[i];
        }
        else{
            load += arr[i];
        }
    }
    return days;
}
int leastWeightCapacity(vector<int>& arr, int n, int d){
    int maxi = *max_element(arr.begin(), arr.end());
    int sum = accumulate(arr.begin(), arr.end(), 0);

    for(int i=maxi; i<=sum; i++){
        if(findDays(arr, i) <= d){
            return i;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr{5, 4, 5, 2, 3, 4, 5, 6}; //the elements shows the weight of each packages
    int n = arr.size();
    int d = 5; //d refers to the no. of days by with all the packages have to shift
    cout<<"The least capacity of the weight so that all the packages will arive with "<<d<<" days :"<<leastWeightCapacity(arr, n, d);
    return 0;
}