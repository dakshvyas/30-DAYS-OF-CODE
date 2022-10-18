#include<iostream>
using namespace std;
int power_using_recursion(int n,int i){
if(i==0)
return 1;
if(i==1){
    return n;
}
int ans=n*power_using_recursion(n,i-1);
return ans;
}
int main(){
int i,n;
cout<<"Enter number";
cin>>n;
cout<<"Enter power";
cin>>i;
int ans=power_using_recursion(n,i);
cout<<"Power of the given number is "<<ans;
    return 0;
}