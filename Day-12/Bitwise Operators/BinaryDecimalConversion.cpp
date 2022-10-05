#include<iostream>
#include<math.h>
using namespace std;
int main(){
    //Binary to decimal conversion
int n;
int ans=0;
int i=0;
int digit;
cout<<"Enter the binary number";
cin>>n;
while(n!=0){
digit=n%10;
if(digit==1){
    ans=(digit*pow(2,i))+ans;
}
n=n/10;
i++;
}
cout<<"Answer is: "<<ans;
    return 0;
}


 