#include<bits/stdc++.h>
using namespace std;

int maxDepth(string str){
    int count = 0;
    int maxi = INT_MIN;
    for(int i=0; i<str.length(); i++){
        maxi = max(maxi, count);
        if(str[i] == '('){
            count++;
        }
        else if(str[i] == ')'){
            count--;
        }
    }
    return maxi;
}
int main()
{
    string str;
    cout<<"Enter the string : ";
    getline( cin, str);
    cout<<maxDepth(str);
    return 0;
}