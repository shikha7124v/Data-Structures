//Problem - given an array prices[] shows the prices of the stocks on the particular ith day, we have to find the max profite by buying and selling the stocks.
#include<bits/stdc++.h>
using namespace std;
int maxProfite(vector<int>& prices){
    int maxPro = 0;
    int n = prices.size();
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(prices[j] > prices[i]){
                maxPro = max(prices[j]-prices[i], maxPro);
            }
        }
    }
    return maxPro;
}
int main()
{
    vector<int> prices = {7,1,2,3,6,5};
    int maxProfiteIS = maxProfite(prices);
    return 0;
}