//Class template 
#include<iostream>
using namespace std;
template <class X>class Arraylist{
private:
struct Controlblock
{
   int capacity;
   X *arr_ptr;
};
Controlblock *p;
public:
Arraylist(int capacity)
{
   p=new Controlblock; 
   p->capacity=capacity;
   p->arr_ptr=new X[p->capacity];
}
void addElement(int index,X data){
    if (index>=0 && index<=p->capacity-1)
    p->arr_ptr[index]=data;
    else
    cout<<"\n Array index is not valid";
}
void ViewList(){
    int i;
    for(i=0;i<p->capacity;i++)
    cout<<" "<<p->arr_ptr[i];
}

};

int main(){
Arraylist <double> list1(4);
list1.addElement(0,3.3);
list1.addElement(1,4.4);
list1.addElement(2,5.5);
list1.addElement(3,6.6);
list1.ViewList();
    return 0;
}