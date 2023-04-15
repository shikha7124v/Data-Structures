#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a =10, b=20;
    //logic1 using temp variable
    int temp = a;
    a = b;
    b = temp;
    cout<<"Swapped with logic 1 = "<<a<<" "<<b;
    cout<<endl;
    //logic2 without using temp variable with + and -
    a = a+b;
    b = a-b;
    a = a-b;
    cout<<"Swapped with logic 2 = "<<a<<" "<<b;
    //logic3 with * and /
    cout<<endl;
    a = a*b;
    b = a/b;
    a = a/b;
    cout<<"Swapped with logic 3 = "<<a<<" "<<b;
    //logic4 with Bitwise XOR ^
    cout<<endl;
    a = a^b;
    b = a^b;
    a = a^b;
    cout<<"Swapped with logic 4 = "<<a<<" "<<b;
    //logic5 within a sinfle line
    cout<<endl;
    b = a+b - (a=b);
    cout<<"Swapped with logic 5 = "<<a<<" "<<b;
    return 0;
}