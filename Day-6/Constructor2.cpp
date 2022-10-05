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
c.a=70;
cout<<a;
cout<<c.a;
}


};

int main(){
   Employee e1(30,40),e2(50),e3;
   //Default Constructor and Copy Constructor
   Employee e4(e2);
   ;
    return 0;
}
