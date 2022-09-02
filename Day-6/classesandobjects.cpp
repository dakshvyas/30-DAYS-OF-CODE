//Accesing private data of structure using function
#include<iostream>
using namespace std;
struct Complex
{
    private:
    int a,b;
    public:
    void set_data(int x,int y){
        a=x;b=y;
    }
    void get_data(){
        cout<<a<<" "<<b<<endl;
    }
};


int main(){
   Complex c1;
   c1.set_data(5,6);
   c1.get_data();
    return 0;
}


//Accesing private data of class using functions(defined outside class using Membership label)
#include<iostream>
using namespace std;
class  Complex
{
private:
int a,b;
public:
   void set_data(int,int) ;
   void get_data(){
    cout<<a<<"\n"<<b;
   }
};

void Complex::/*Membership label*/ set_data(int x,int y){
    a=x;
    b=y;
}

int main(){
    Complex c1;
    c1.set_data(10,20);
    c1.get_data();
    return 0;
}