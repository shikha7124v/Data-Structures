// Operator Overloading is a compile time polymorphism. It gives a special meaning to an existing operator
#include<iostream>
using namespace std;

class OperatorOverloading {
    private: 
       int real, imag;
    public: 
       OperatorOverloading(int r = 0, int i = 0){  //default constructor
           real = r;
           imag = i;
       }
       void print(){
        cout<<real <<" +i"<<imag<<endl;
       }
       friend OperatorOverloading  operator+ ( OperatorOverloading const& c1, OperatorOverloading const& c2);
};

OperatorOverloading operator+(OperatorOverloading const& c1, OperatorOverloading const& c2)
{
    return OperatorOverloading(c1.real + c2.real, c1.imag + c2.imag);
}
int main()
{
    OperatorOverloading c1(10,5), c2(2,4);
    OperatorOverloading c3 = c1 + c2;
    c3.print();
    return 0;
}