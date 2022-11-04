#include<iostream>
using namespace std;
class A{
public:
virtual void f1(){
    cout<<" Good Morning "<<endl;
}
void f2(){
    cout<<"Hello World"<<endl;
}

};
class B:public A{
public:
void f1(){
    cout<<"Good Evening "<<endl;
}
void f2(){
    cout<<"Hii World"<<endl;
}
};
int main(){
A *p,a1;
p=&a1;
p->f1();
p->f2();
    return 0;
}