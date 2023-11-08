#include<bits/stdc++.h>
using namespace std;

string largestOdd(string num)
{
    while(!empty(num) and (num.back() - '0')%2 == 0){
        num.pop_back();
    }
    return move(num);
}
int main()
{
    string num;
    cout<<"Enter the string number : ";
    getline(cin, num);
    cout<<"Largest odd number in string is : "<<largestOdd(num);
    return 0;
}