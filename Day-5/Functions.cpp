//***********************DAY-5*********************************
//Functions
//1.)Formal arguments with ordinary variables

 #include<iostream>
 int sum(int,int,int=0);
 int main(){
 int a,b,c,s,add;
std::cout<<"Enter three numbers";
std::cin>>a>>b>>c;
s=sum(a,b,c);
add=sum(a,b);
std::cout<<s<<"\n"<<add;
    return 0;
}
int sum(int x,int y,int z){
    return x+y+z;
}

//2.)Formal arguments with pointer variables
#include<iostream>
using namespace std;
int sum(int *,int*);
int main(){
    int a,b,s;
  cout<<"Enter three numbers";
  cin>>a>>b;
  cout<<"Value of x before calling :"<<a<<endl;
    s=sum(&a,&b);
  std::cout<<"Value of x after calling"<<a<<endl;
    std::cout<<s<<endl;
    return 0;
}
int sum(int *x,int*y){
    *x=*x+5;
    return *x;
}

//3.)Formal arguments with reference variables
#include<iostream>
using namespace std;
int sum(int &,int &);
int main(){
    int a,b,s;
    cout<<"Enter two numbers";
    cin>>a>>b;
    cout<<"Value of x before calling:"<<a<<endl;
    s=sum(a,b);
    cout<<"Value of x after calling:"<<a<<endl;
    cout<<s<<endl;
    return 0;
}
int sum(int &x,int &y){
x=x+5;
return x ;
}
