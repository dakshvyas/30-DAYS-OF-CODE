#include<iostream>
using namespace std;

void Print_counting(int n){
    if(n==0)
    return ;
    cout<<n;
    Print_counting(n-1);
}

int main(){
    int n;
cin>>n;
Print_counting(n);
    return 0;
}