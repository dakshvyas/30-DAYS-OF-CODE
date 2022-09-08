
//Abstract Class 
#include<iostream>
using namespace std;
class Person {
public:
virtual void fun()=0;
};

class Student:public Person{
public:
void fun(){
    cout<<"Hello World";
}
};
int main(){
Student *p, s1;
p=&s1;
p->fun();
return 0;
}


//Template in C++
template <class X,class Y > 
X big(X a ,Y b){
    if (a>b)
    return a;
    else 
    return b;
}
int main(){
    cout<<big(4,5);
    cout<<big(5.5,6.5);
}
