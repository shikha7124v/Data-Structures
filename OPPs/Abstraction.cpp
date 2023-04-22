// Applying some essential information and finding the background details or implementation.

// 1. Abstraction using classes
// 2. Abstraction using header file eg. pow() function from math.h file is used to calculate power of a no. without actually showing the background implementation of it.
// 3. Abstraction using access modifier, private, public
#include<iostream>
using namespace std;

class Abstraction{
    private: 
      int a, b;
    public:
      void set(int x, int y){
        a = x;
        b = y;
      }
      void display(){
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
      }
};
int main()
{
    Abstraction ab;
    ab.set(10,20);
    ab.display();
    return 0;
}
