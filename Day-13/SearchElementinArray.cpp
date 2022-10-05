#include<iostream>
using namespace std;
bool search(int arr[],int size,int element){
for(int i=0;i<size;i++){
    if(arr[i]==element){
        return 1;
    }
}
return 0;
}

int main(){

    int n,arr[20];
cout<<"Enter the no elements";
cin>>n;
for(int i=0;i<n;i++){
    cout<<" Enter the "<<i<<" element"<<endl;
    cin>>arr[i];
}
cout<<"Enter the element you want to search";
int ele;
cin>>ele;
bool found=search(arr,n,ele);
if(found){
    cout<<"Element is present";
}
else {
    cout<<"Element is absent";
}
    return 0;
}