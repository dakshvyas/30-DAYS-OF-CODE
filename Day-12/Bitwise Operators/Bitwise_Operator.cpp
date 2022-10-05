#include<iostream>
#include<math.h>
using namespace std;
int main(){
 /*  int a=2,b=3;
    cout<<(a&b)<<endl;
    cout<<(a|b)<<endl;
    cout<<(~a)<<endl;
    cout<<(a^b)<<endl;

    cout<<(5<<1)<<endl;
    cout<<(15>>2)<<endl;
    
    int i=7;
    cout<<(i++);
    cout<<(i--);
    cout<<(++i);
    cout<<(--i);
*/
//Binary to decimal conversion 
 
 float ans=0;
 int i=0;
 int n;
 cout<<"Enter the number";
 cin>>n;
while(n!=0){
    int bit=(n&1);
    ans=(bit * pow(10,i))+ans;
    n=n>>1;
    i++;
}
cout<<"Answer is "<<ans;
return 0;
}