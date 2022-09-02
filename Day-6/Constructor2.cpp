//Constructor Overloading
#include<iostream>
using namespace std;
class Employee{
private:
int a,b;
public:
Employee(int x,int y){ //Parameterized Constructor
    a=x;b=y;
    cout<<a<<"\n"<<b;
}
Employee(int x){
    a=x;
}
Employee(){ //Default Constructor
}
//Copy Constructor
Employee(Employee &c){
a=c.a;
b=c.b;
cout<<a<<"\n"<<b;

}


};

int main(){
   Employee e1(10,20),e2(10),e3;
   //Default Constructor and Copy Constructor
   Employee e4(e1);
    return 0;
}
