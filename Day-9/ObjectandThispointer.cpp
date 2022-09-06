//Object Pointer
#include<iostream>
using namespace std;
class Object{
private:
int a,b;
public:
void set_data(int a,int b){
   this->a=a;    //This pointer
   this->b=b;
}
void show_data(){
    cout<<"A is : "<<a<<"B is : "<<b<<endl;
}

};
int main(){
Object o1,*p;//Object pointer
p=&o1;
p->set_data(10,20);
p->show_data();
    return 0;
}