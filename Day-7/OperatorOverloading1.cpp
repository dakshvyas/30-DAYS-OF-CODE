
#include<iostream>
using namespace std;
class A {
private:
int a;
public:
void set_data(int x){
    a=x;
}
void show_data(){
    cout<<a<<endl;
}
A friend operator-(A);
};

A operator-(A a1){
A temp;
temp.a=-a1.a;
return temp;
}
int main(){
A a1,a2;
a1.set_data(10);
a2=-a1;
a2.show_data();
    return 0;
}