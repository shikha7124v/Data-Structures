#include<bits/stdc++.h>
using namespace std;

int isCyclicRotation(string &p, string &q)
{
      string res=p;

    int j = p.length()-1;

    do{

        string temp = "";

        temp = temp + res.substr(j) + res.substr(0,j);

        if(temp==q)

        {

            return 1;

        }

        res = temp;

        j = res.length()-1;

 

    }while(res != p);

 

    return 0;
}
int main()
{
    string str1 = "shikha";
    string str2 = "ikhash";
    cout<<isCyclicRotation(str1, str2);
    return 0;
}