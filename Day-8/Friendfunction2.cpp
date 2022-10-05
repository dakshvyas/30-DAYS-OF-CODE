
#include<iostream>
using namespace std;
class A{
private:
int a,b;
public:
void set_data(int x,int y){
    a=x;
    b=y;
}
void show_data(){
    cout<<a<<" "<<b<<endl;
}
A friend operator+(A,A);


};

A operator+(A a1,A b1){
A temp;
temp.a=a1.a+b1.a;
temp.b=a1.b+b1.b;
return temp;
}
int main(){
A o1,o2,o3;
o1.set_data(10,20);
o2.set_data(50,100);
o3=o1+o2;
o3.show_data();
    return 0;
}