#include<iostream>
using namespace std;
class Employee{
  private:
  int a,b;
  public:
  void get_data(){
    cout<<"This is first function";
  }
  ~Employee(){//Destructor is an instance member function which runs just before the end of program
    cout<<"Game Over";
  }  
};
int main(){
    Employee e1;
    e1.get_data();
    return 0;
}