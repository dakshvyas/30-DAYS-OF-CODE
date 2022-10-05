#include<iostream>
using namespace std;
int getMax(int arr[],int n){
int max=INT8_MIN;
for(int i=0;i<n;i++){
    if(arr[i]>max){
        max=arr[i];
    }
}
return max;
}
int getMin(int arr[],int n){
int min=INT8_MAX;
for(int i=0;i<n;i++){
    if(arr[i]<min){
        min=arr[i];
    }
}
return min;
}

int main(){
int size;
int num[100];
cin>>size;
for (int i=0;i<size;i++){
    cout<<"Enter the number";
    cin>>num[i];
}
cout<<"Max value of array is : "<<getMax(num,size)<<endl;
cout<<"Min value of array is : "<<getMin(num,size)<<endl;
    return 0;
}