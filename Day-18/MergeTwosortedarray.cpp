#include<iostream>
using namespace std;

void merge_Array(int arr1[],int arr2[],int arr3[],int size1,int size2){
int i=0,j=0;
int k=0;
while(i<size1&&j<size2){
    if(arr1[i]<arr2[j]){
        arr3[k]=arr1[i];
        i++;
        k++;
    }
    else
    {
        arr3[k]=arr2[j];
        k++;
        j++;
    }
}
while (i<size1)
{
    arr3[k]=arr1[i];
    k++;
    i++;
}
while (i<size2)
{
    arr3[k]=arr2[j];
    k++;
    j++;
}
}
void print(int arr3[],int size3){
for(int i=0;i<size3;i++){
    cout<<arr3[i]<<" ";
}
}
int main(){
  int arr1[5]={1,3,5,7,9};
  int arr2[4]={2,4,6,8};
  int arr3[9]={0};
  merge_Array(arr1,arr2,arr3,5,4);
  print(arr3,8);
    return 0;
}