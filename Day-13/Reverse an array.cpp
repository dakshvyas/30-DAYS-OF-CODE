#include<iostream>
using namespace std;
void swap_Array(int arr[],int size){
int start=0;
int end=size-1;
while(start<=end){
    swap(arr[start],arr[end]);
    start++;
    end--;
}
}
void print_Array(int arr[],int n){
for(int i=0;i<n;i++){
    cout<<arr[i]<<" \t";
}
}
int main(){
int n,arr[10];
cout<<"Enter the number of element";
cin>>n;
for(int i=0;i<n;i++){
    cout<<"Enter the "<<i+1<<" element";
    cin>>arr[i];
}
swap_Array(arr,n);
print_Array(arr,n);
    return 0;
}