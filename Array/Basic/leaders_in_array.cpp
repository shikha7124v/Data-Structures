#include<bits/stdc++.h>
using namespace std;

 vector<int> leaders(vector<int> a, int n){// Code here
    vector<int> leader;
    for(int i=n-2; i>=0; i--){
        int j = i;
        int mx = a[n-1];
        leader.push_back(mx);
        //  for(int j=i; j<=n; j++){
        //       if(a[i] > a[j]){
        //         leader.push_back(a[i]);
        //       }
        //   }
        while(j<n && j>=i){
            if(a[i] > a[j]){
                j++;
                mx = max(mx, a[i]);
                if(mx == a[i]){
                    i++;
                }
                else{
                    leader.push_back(mx);
                }
            }
        }
        return leader;
        }
    leader.push_back(-1);
    return leader;
}
int main()
{
    vector<int> a = {1,3,5,6,9,1,2,3,4,5,6};
    int n = a.size();
    vector<int> leaderarr = leaders(a, n);
    for(int x: leaderarr){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
    
}