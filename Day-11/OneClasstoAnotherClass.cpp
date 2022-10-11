//Conversion through constructor
#include<iostream>
using namespace std;
class Product{
private:
int x,y;
public:
void set_data(int p,int q){
    x=p;
    y=q;
}
void show_data(){
    cout<<x<<y<<endl;
}
int getX(){
    return x;
}
int getY(){
    return y;
}
};
class Item{
private:
int a,b;
public:
Item(){}
Item(Product p){
    a=p.getX();
    b=p.getY();
}
void show_data(){
cout<<a<<"\t"<<b;
}

};

int main(){
Item i1;
Product p1;
p1.set_data(3,4);
i1=p1;
i1.show_data();
    return 0;
}





