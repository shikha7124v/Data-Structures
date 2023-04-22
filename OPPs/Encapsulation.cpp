// encapsulation means wrapping up the data and functions under a single unit. 
// Below program showing that the methods and variables are bind together under a class.

#include<bits/stdc++.h>
using namespace std;
class Encapsulation
{
private:
    string name;
    int age;
public:
    Encapsulation(string name, int age)
{
    this->name = name;
    this->age = age;
}
void setName(string name){
    this->name = name;
}
string getName(){
    return name;
}
void setAge(int age){
    this->age = age;
}
int getAge(){
    return age;
}

};
int main()
{
    Encapsulation en("David", 35);
    cout<<"Name :"<<en.getName()<<endl;
    cout<<"Age :"<<en.getAge()<<endl;

    en.setName("Shiv");
    en.setAge(25);

    cout<<"Name :"<<en.getName()<<endl;
    cout<<"Age :"<<en.getAge()<<endl;
    return 0;
}


