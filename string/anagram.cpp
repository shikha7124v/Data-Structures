// check if two strings are anagram or not 
#include<bits/stdc++.h>
using namespace std;

bool anagram(string str1, string str2){
    int n1 = 0, n2 = 0; //total number of letters
    n1 = str1.size();
    n2 = str2.size();
    if(n1 != n2){
        return false;
    } 
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    for(int i=0; i<n1; i++){
        if(str1[i] != str2[i]){
            return false;
        }
    }
    return true;
}
int main()
{
    string str1, str2;
    str1 = "abc";
    str2 = "cbb";
    cout<<anagram(str1, str2);
    return 0;
}