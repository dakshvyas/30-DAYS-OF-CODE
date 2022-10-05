//Method Overriding and Method hiding
#include<iostream>
using namespace std;
class A{
private:
int a,b;
public:
void fun1(){ 
    cout<<"Hello World";
 }

};

class B :public A{
public:
void fun1(){  
    cout<<"Hello";
}// Method overriding

};
int main(){
B a1;
a1.fun1();
//a1.fun2();


    return 0;
}