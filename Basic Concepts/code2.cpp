//Data Types Ranges 
#include<iostream>
using namespace std;
int main()
{
    //Rough ranges 
    10^-9 <<int<<10^9
    10^-9<<long int<<10^9
    10^-18<<long long int<<10^18 

    // int a = 100000;
    // int b = 100000;
    // int c = a*b;
    // cout<<c<<endl; //Overflow 

    // int mx = INT_MAX;
    // cout<<mx<<endl;
    // cout<<mx + 1<<endl;

    long long int a = 100000;
    long long int b = 100000;

    long long int c = a*b;
    cout<<c<<endl;
    return 0;
}

range formula = - (2 ^ bytes )/2 to (2 ^ bytes)/2 - 1 
short int = 2 bytes
int = 4 bytes
long int = 4 bytes 
long long int = 8 bytes 
char = 1 byte 
float = 4 bytes 
double = 8 bytes 
long double = 12 bytes 
wchar_t = 2 or 4 (wide character) 