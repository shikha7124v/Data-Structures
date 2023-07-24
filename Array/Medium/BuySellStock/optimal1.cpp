#include<bits/stdc++.h>
using namespace std;
int maxPro(vector<int> prices){
    int n = prices.size();
    if(n <= 1){
        return 0;
    }
    int buy = prices[0];
    int sell = 0;
    for(int i=0; i<n; i++){
        buy = min(buy, prices[i]);
        sell = max(sell, prices[i]-buy);
    }
    return sell;
}
int main()
{
    vector<int> prices{5,3,1,6,3,7,8,4,5};
    cout<<"Max Profit = "<<maxPro(prices);
    return 0;
}