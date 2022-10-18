//Factorial using recursion
#include<iostream>
using namespace std;
int factorial_using_recursion(int n){
    int ans;
if(n==0)
return 0;
if(n==1){
    return 1;
}
 ans=n*factorial_using_recursion(n-1);
return ans;
}
int main(){
cout<<"Enter the number";
int n;
cin>>n;
int ans=factorial_using_recursion(n);
cout<<"Factorial of the number is : "<<ans;
    return 0;
}