// Inverse pyramid pattern 
#include<iostream>
using namespace std;
int main()
{
    for(int i=1; i<=5; i++){
        for(int j=1; j<i; j++){
            cout<<"  ";
        }
        for(int k=5; k>=i; k--){
            cout<<"* ";
        }
        for(int l=5; l>i; l--){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}