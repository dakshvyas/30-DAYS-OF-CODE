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
    cout<<a<<b<<"\n";
}
operator int(){
    return(a);
}

};
int main(){
Complex c1;
c1.set_data(3,6);
c1.show_data();

int x;
x=c1;
cout<<x;
cout<<x;

    return 0;
}