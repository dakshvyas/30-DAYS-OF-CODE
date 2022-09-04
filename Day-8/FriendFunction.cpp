

//Friend function
#include<iostream>
using namespace std;
class Complex{
private:
int x,y;
public:
void set_data(int a, int b){
    x=a;
    y=b;
}
void show_data(){
  cout<<"A is "<<x<<"\nB is "<<y<<endl;
}
friend void sum(Complex);


};
void sum(Complex c){
    cout<<"Sum is :"<<c.x+c.y;
}


int main(){
 Complex c1,c2,c3;
 c1.set_data(10,20);
 c1.show_data();
 sum(c1);
    return 0;
}


//Friend function being friend to more than one class

#include<iostream>
using namespace std;
class B;
class A{
int a;
public:
void set_data(int x){
a=x;}
friend void sum(A,B);
};

class B
{
int b;
public:
void set_data(int y){
b=y;}
friend void sum(A,B);
};
void sum(A a1,B b1){
    cout<<"Sum is :"<<a1.a+b1.b;
}


int main(){
A o1;
B o2;
o1.set_data(3);
o2.set_data(2);
sum(o1,o2);
    return 0;
}







