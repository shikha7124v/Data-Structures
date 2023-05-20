// Hollow Inverted Half Pyramid
#include<iostream>
using namespace std;
int main()
{
    for(int i=5; i>=1; i--){
        for(int j=5; j>=i; j--){
            if(i<5 && i>1 && j<5 && j>1){
                cout<<"  ";
            }
            else{
            cout<<"* ";
            }
            if(i == j-1){
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}