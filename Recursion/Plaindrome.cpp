//Check if the string is palindrome or not 
#include<bits/stdc++.h>
using namespace std;
bool palindrome(string str, int n, int i)
{
    if(i>=n/2){
        return 0;
    }
    if(str[i] != str[n-i-1]){
        return false;
    }
    i++;
    return true;

}
int main()
{
    string str = "SHIHSK";
    int n = str.length();
    cout<<palindrome(str, n, 0);
    return 0;
}