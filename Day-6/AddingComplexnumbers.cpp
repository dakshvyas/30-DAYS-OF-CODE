#include<iostream>
using namespace std;
class Complex
{
private:
   int a,b;
public:
void set_data(int x,int y){
    a=x;
    b=y;
}
void get_data(){
    cout<<a<<"\n"<<b<<endl;
}

Complex add(Complex c){
    Complex temp;
    temp.a=a+c.a;
    temp.b=b+c.b;
    return temp;
}
   
};
int main(){
    Complex c1,c2,c3;
    c1.set_data(10,20);
    c2.set_data(50,100);
    c3=c1.add(c2);
    c3.get_data();
    return 0;
}