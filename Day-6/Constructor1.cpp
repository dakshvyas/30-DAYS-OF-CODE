#include<iostream>
using namespace std;
class  Employee
{
private:
    int a,b;
public:
  void set_data(int x,int y){
    a=x;
    b=y;
  }
  void show_data(){
  cout<<a,b;
  }
Employee(){
    cout<<a<<"is greater than"<<b;
}
};
int main(){
Employee e1,e2;
    return 0;
}