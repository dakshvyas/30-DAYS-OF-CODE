
//Overloading of unary operator ++ (Pre and Post)

#include<iostream>
using namespace std;
class  Integer
{
private:
    int x;
public:
   void set_data(int a){
   x=a;
   }
   void show_data(){
    cout<<"A is "<<x<<endl;
   }
  Integer operator++(){    //Pre
   Integer i;
   i.x=++x; 

  }
  Integer operator++(int){  //Post (Here int is used to differentiate btw Post and Pre unary operators )
   Integer j;
   j.x=x++;
  }
};
int main(){
  Integer i1,i2;
  i1.set_data(10);
  i1.show_data();
  i2=++i1;
  i1.show_data();
  i2.show_data();
  

  i1.set_data(20);
  i1.show_data();
  i2=i1++;
  i1.show_data();
  i2.show_data();
    return 0;
}


//Overloading of unary operator --(Pre and Post)

#include<iostream>
using namespace std;
class  Integer
{
private:
    int x;
public:
   void set_data(int a){
   x=a;
   }
   void show_data(){
    cout<<"A is "<<x<<endl;
   }
  Integer operator--(){    //Pre
   Integer i;
   i.x=--x; 

  }
  Integer operator--(int){  //Post (Here int is used to differentiate btw Post and Pre unary operators )
   Integer j;
   j.x=x--;
  }
};
int main(){
  Integer i1,i2;
  i1.set_data(10);
  i1.show_data();
  i2=--i1;
  i1.show_data();
  i2.show_data();
  

  i1.set_data(20);
  i1.show_data();
  i2=i1--;
  i1.show_data();
  i2.show_data();
    return 0;
}


