
//Overloading of binary operators using friend function
#include<iostream>
using namespace std;
class Hello{
private:
int a,b;
public:
void set_data(int x,int y){
a=x;
b=y;
}
void show_data(){
cout<<"A is :"<<a<<"B is :"<<b<<endl;
}
Hello friend operator+(Hello,Hello) ;
};
Hello operator+(Hello y1,Hello y2){
    Hello hy;
    hy.a=y1.a+y2.a;
    hy.b=y1.b+y2.b;
    return hy;

}

int main(){
Hello h1,h2,h3;
h1.set_data(5,6) ;
h2.set_data(8,9);
h3=h1+h2;//h3=operator+(h1,h2);
h3.show_data();
   return 0;
}

//Overloading of unary operators using friend function

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
cout<<"A is :"<<x<<"B is :"<<y<<endl;
}
 friend Complex operator-(Complex);

};
Complex operator-(Complex c){
    Complex temp;
    temp.x=-c.x;
    temp.y=-c.y;
    return temp;
}


int main(){
Complex c1,c2;
c1.set_data(5,6);
c2=-c1;
c1.show_data();
c2.show_data();
    return 0;
}