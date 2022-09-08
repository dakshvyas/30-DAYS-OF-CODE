//virtual function working concept
#include<iostream>
using namespace std;
class A {
public:
void fun1(){
    cout<<"Hello-A ";
}
virtual void fun2(){
    cout<<"Hii-A";
}    
virtual void fun3(){
    cout<<"How are you";
}

};
class B:public A{
public:
void fun1(){
    cout<<"Hello-B ";
}
void fun2(){
    cout<<"Hii-B";
}
void fun3(int x){
    cout<<"I am fine";
}
};
int main(){
A*p,a1;
p=&a1;
p->fun1();
p->fun2();
p->fun3();
// gives error p->fun3(5);
  
/*A*p;
B b1;
p=&b1;
p->fun1();
p->fun2();
p->fun3();
// gives error  p->fun3(4);
 */ 
    return 0;
}