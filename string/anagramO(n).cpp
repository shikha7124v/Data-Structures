// Better Approach 
#include<bits/stdc++.h>
using namespace std;

bool anagram(string str1, string str2){
    if(str1.size() != str2.size()){
        return false;
    }
    int freq[26] = {0};
    for(int i=0; i<str1.size(); i++){
        freq[str1[i] - 'A']++;
    }
    for(int i=0; i<str2.size(); i++){
        freq[str2[i] - 'A']--;
    }
    for(int i=0; i<26; i++){
        if(freq[i] != 0){
            return false;
        }
    }
    return true;
}
int main()
{
    string str1 = "shikha";
    string str2 = "sahhik";
    cout<<anagram(str1, str2);
    return 0;
}