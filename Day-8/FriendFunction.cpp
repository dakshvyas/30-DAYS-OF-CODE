#include<iostream>
using namespace std;
class B;
class A{
private:
int a;
public:
void set_data(int x){
    a=x;
}
void show_data(){
    cout<<" A is :"<<a<<endl;
}
friend void Multiplication(A,B);
};
class B{
private:
int b;
public:
void set_data(int x){
    b=x;
}
void show_data(){
    cout<<" B is :"<<b<<endl;
}
friend void Multiplication(A,B);
};

void Multiplication(A a1,B b1){
    cout<<"Multiplication is : "<<a1.a*b1.b<<endl;
}
int main(){
A a1;
B b1;
a1.set_data(10);
b1.set_data(20);
Multiplication(a1,b1);
    return 0;
}


