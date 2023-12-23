// Two strings of same lengths are said to be isomorphic if the number of mapping letter are equal in number simultaneously
#include<bits/stdc++.h>
using namespace std;

bool isIsomorphic(string str1, string str2)
{
    if(str1.size() != str2.size()){
        return false;
    }
    int arr1[26] = {0};
    int arr2[26] = {0};

    for(int i=0; i<str1.size(); i++){
        arr1[str1[i] - 97]++;
    }
    for(int i=0; i<str2.size(); i++){
        arr2[str2[i] - 97]--;
    }
    int cnt1 = 0, cnt2 = 0;
    for(int i=0; i<26; i++){
        if(arr1[i] != 0) cnt1++;
        if(arr2[i] != 0) cnt2++;
    }
    if(cnt1 == cnt2){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    string str1 = "aap";
    string str2 = "xxy";
    if(isIsomorphic(str1, str2)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}