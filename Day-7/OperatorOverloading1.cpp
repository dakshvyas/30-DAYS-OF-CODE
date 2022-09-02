
//Operator Overloading of Unary operator
#include<iostream>
using namespace std;
class Complex{
private:
int a,b;
public:
void set_data(int x,int y){
    a=x;
    b=y;
}
void show_data(){
    cout<<"A is "<<a<<" \nB is "<<b<<endl;
}
Complex operator -(){
    Complex t;
    t.a=-a;
    t.b=-b;
return t;
}
};
int main(){
Complex c1,c2;
c1.set_data(10,20);
c2=-c1;
c2.show_data();
return 0;
}


//Operator overloading of Binary operator

#include<iostream>
using namespace std;
class Complex{
private:
int x,y;
public:
void set_data(int a,int b){
    x=a;
    y=b;
}
void show_data(){
    cout<<"A is "<<x<<"\nB is "<<y<<endl;

}

Complex operator *(Complex c){
    Complex t;
  t.x=x*c.x;
  t.y=y*c.y;
  return t;
}

};

int main(){
 Complex c1,c2,c3;
 c1.set_data(10,20);
 c2.set_data(20,30);
 c3=c1.operator*(c2);
 c3.show_data();
 return 0;
}

