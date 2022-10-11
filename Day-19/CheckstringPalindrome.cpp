//Check if string is a Palindrome
#include<iostream>
#include<vector>
using namespace std;

int length(char a[]){
    int i=0;
    int count=0;
    while(a[i]!='\0'){
    count++;
    i++;
    }
    return count;
}

bool check_Palindrome(char a[],int size){
int s=0;
int e=size-1;
while(s<=e){
    if(a[s]!=a[e]){
        return 0;
    }
    else{
        s++;
        e--;
    }
return 1;
}
}

int main(){
 char name[20];
 cin>>name;
int l=length(name);
cout<<"Length is "<<l;
cout<<"Palindrome or Not : "<<check_Palindrome(name,l);
    return 0;

}