//Increment and Decrement Operators 
#include<iostream>
using namespace std;
int main()
{
    int a = 5;
    cout<<a<<endl;   //5
    cout<<a++<<endl; //5
    cout<<a++<<endl; //6
    cout<<a<<endl;   //7
    cout<<++a<<endl; //8
    cout<<a<<endl;   //8

    int b = 10;
    cout<<b--<<endl; //10
    cout<<--b<<endl; //8
    cout<<b--<<endl; //8
    cout<<--b<<endl; //6
    return 0;
}

