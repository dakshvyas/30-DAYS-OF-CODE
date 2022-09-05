//Member function of one class can be friend to member function of another class
#include<iostream>
using namespace std;
class A{
private:
int a,b;
public:
void fun(){
    cout<<"Hello World";
}

};
class B{
    friend class A;
public:
friend void A::fun();
void hello(){
    void fun();
}

};

int main(){
    A a1;
    a1.fun();
    B b1;
    b1.hello();
    return 0;
}
