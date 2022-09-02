#include<iostream>
using namespace std;
class Account
{
private:
int x;//Instance variable
static float y;//Static member variable/Class variable(This is the declaration we need to define it so that it gets memory)
public:
void set_data(int a){
    x=a;
}
static void set_roi(float r)//Static member function
{
  y=r;
}    
};
float Account :: y=3.4f;
int  main(){
    Account a1;
    //IF Public  Account::y=4.5;

Account::set_roi(30.8);
return 0;
}