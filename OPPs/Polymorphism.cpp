// ability of a message to be displayed in more than one form, Polimorphism is used in implementing inheritance.
// Operator Overloading - Process of making operator exhibit different behaviors in different instance.
// Function Overloading - Asingle function name to perform different types of tasks
#include<bits/stdc++.h>
using namespace std;
 class Polymorphism{
    public: 
    void func(int x){
        cout<<"x = "<<x<<endl;
    }
    void func(double x){
        cout<<"x = "<<x<<endl;
    }
    void func(int x, int y){
        cout<<"Value of x and y = "<<x<<" "<<y<<endl;
    }
};
int main()
{
    Polymorphism po;
    po.func(7);
    po.func(9.123);
    po.func(12,18);
    return 0;
}  