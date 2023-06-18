#include<iostream>
using namespace std;
int cnt = 0;
int func()
{
    if(cnt == 4){   //base condition
        return 0;
    }
    cout<<cnt<<" ";
    cnt++;
    func();   //Recursive call
    return 0;
}
int main()
{
    func();
    return 0;
}
