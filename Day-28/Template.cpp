//Template in C++
#include<iostream>
using namespace std;
template <class X> class ArrayList{
    private :
struct ControlBlock{
int capacity;
X*arr_ptr;
};
ControlBlock *p;
public:
ArrayList(int Capacity){
    p=new ControlBlock;
    p->capacity=Capacity;
    p->arr_ptr=new X[p->capacity];
}
void addElement(int index, X data){
    if((index>=0)&& (index<=p->capacity-1)){
        p->arr_ptr[index]=data;
    }
    else cout<<"Array index is not valid";
}
void view_List(){
    int i;
    for(i=0;i<p->capacity;i++){
        cout<<" "<<p->arr_ptr[i];
    }
}
};

int main(){
ArrayList <double> list1 (4);
list1.addElement(0,1.1);
list1.addElement(1,2.2);
list1.addElement(2,3.3);
list1.view_List();
    return 0;
}