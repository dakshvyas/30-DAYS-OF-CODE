//Selection Sort
#include<iostream>
using namespace std;
void selection_Sort(int arr[],int size){
for(int i=0;i<(size-1);i++){
    int imp_Index=i;
    for(int j=i+1;j<size;j++){
        if(arr[j]<arr[imp_Index]){
        imp_Index=j;
        }
    }
    swap(arr[imp_Index],arr[i]);
}
}
int main(){
int arr[5]={10,2,30,5,6};
selection_Sort(arr,5);
for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}