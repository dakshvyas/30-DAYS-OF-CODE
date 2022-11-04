//This and Object pointer in C++
#include<iostream>
using namespace std;
/*class Object{
private:
int a,b;
public:
void set_data(int a,int b){
    this->a=a;
    this->b=b;
}
void show_data(){
    cout<<"A is : "<<a<<" B is : "<<b<<endl;
}

};
int main(){
Object o1,*p;
p=&o1;
p->set_data(10,20);
p->show_data();
    return 0;
}*/
//New and delete in C++
class DMA{
int a,b;
public:
void set_data(int x,int y){
   a=x;
   b=y;
}
void show_data(){
    cout<<"A is : "<<a<<" B is : "<<b<<endl;
}
};
int main(){
DMA d1,d2;
DMA*p=new DMA;
p->set_data(30,60);
p->show_data();
d2=*p;
d2.show_data();
int *ptr=new int[5];
for(int i=0;i<5;i++){
    cin>>ptr[i];
}
for(int i=0;i<5;i++){
    cout<<ptr[i];
}
float*q=new float;
    return 0;
}