//Bubble Sort 
#include<iostream>
using namespace std;
void bubble_Sort(int arr[],int size){
    bool swapped=false;
for(int i=0;i<size-1;i++){
for(int j=0;j<size-i;j++){
if(arr[j]>arr[j+1]){
swap(arr[j],arr[j+1]);
swapped=true;
}

}
if(swapped==false)
break;
}

}

int main(){
int arr[5]={ 12,2,13,40,8};
bubble_Sort(arr,5);
for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}