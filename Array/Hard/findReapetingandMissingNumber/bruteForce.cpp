// You are given an array of size n, containing the elements having values in the range (1, n), every element should have to apper only once
// except A which is there 2 times, and you have to find B the missing element 

#include<bits/stdc++.h>
using namespace std;

int repeatedAndMissing(vector<int> arr, int n)
{
    int repeated;
    sort(arr.begin(), arr.end());
    for(int i=1; i<=n; i++){
        int cnt = 0;
        for(int j=0; j<n; j++){
            if(arr[j] == i){
                cnt++;
                if(cnt > 1){
                    repeated = arr[i];
                    cout<<"It is the repeated number: "<<repeated;
                    break;
                }
               else{
                    continue;
               }
            }
        }
    }
    cout<<endl;
    int sum = 0;
        for(int i=0; i<n; i++){
            sum += arr[i];
        }
        int actualsum = 0;
        for(int i=1; i<=n; i++){
            actualsum += i;
        }
        cout<<"The missing element is : "<<actualsum - (sum - repeated);
    return 0;
}
int main()
{
    vector<int> arr{3, 1, 2, 5, 4, 6, 7, 5};
    int n = arr.size();
    repeatedAndMissing(arr, n);
    return 0;
}