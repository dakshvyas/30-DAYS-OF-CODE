//Insertion Sort
#include<iostream>
using namespace std;
void insertion_Sort(int arr[],int size){
for(int i=1;i<size;i++){
int temp=arr[i];
int j=i-1;
for(;j>=0;j--){
if(arr[j]>temp){
    arr[j+1]=arr[j];
}
else
break;
}
arr[j+1]=temp;
}
}

int main(){
int arr[5]={13,7,2,20,5};
insertion_Sort(arr,5);
for(int i=0; i<5;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}