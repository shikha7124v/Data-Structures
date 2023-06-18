// fibonacci series 
#include<iostream>
using namespace std;
int fibonacci(int n)
{
    if(n<=1){
        return n;
    } 
    return fibonacci(n-1) + fibonacci(n-2);
}
int main()
{
    int x, i=0;
    cout<<"Enter a no. : ";
    cin>>x;
    while(i<x)
    {
        cout<<endl;
        cout<<fibonacci(i);
        i++;
    }
    return 0;
}