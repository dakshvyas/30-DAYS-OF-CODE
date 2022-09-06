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
void fun2(){ }
};

class B :public A{
public:
void fun1(){  
    cout<<"Hello";
}// Method overriding
void fun2(int x){ }//Method Hiding
};
int main(){
B a1;
a1.fun1();
//a1.fun2();
a1.fun2(4);

    return 0;
}