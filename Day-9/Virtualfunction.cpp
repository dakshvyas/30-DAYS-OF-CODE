//Virtual function
#include<iostream>
using namespace std;
class A {
public:
virtual void f1(){//Here virtual function is used which helps compiler implement Late binding
cout<<"Good Morning"<<endl;
}
void f2(){

}
};
class B:public A  
{
public:
void f1(){
    cout<<"Hello World"<<endl;
}
void f2(){

}
};
int main(){
 A *p,a1;
 B b1;
 p=&b1;
 p->f1();
    return 0;
}