#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>&strs, int n)
{
    if(n == 0) return "-1";
    if(n == 1) return strs[0];

    sort(strs.begin(), strs.end());

    string s = strs[0];
    string e = strs[n-1];
    int len = s.size();
    string temp = "";

    for(int i=0; i<len; i++){
        if(s[i] == e[i]) temp.push_back(s[i]);
        else break;
    }
    return temp;
}
int main()
{
    vector<string> strs = ["flower", "flowers"];
    int n = strs.size();
    cout<<"Common Prefix : "<<longestCommonPrefix(strs, n);
    return 0;
}