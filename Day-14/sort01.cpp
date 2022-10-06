#include<iostream>
using namespace std;
void print_Array(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<" "<<arr[i];
    }
}
void sort_Array(int arr[],int size){
int left=0,right=size-1;
while(left<right){
    while(arr[left]==0 && left < right){
        left++;
    }
    while(arr[right]==1 && left<right){
        right--;
    }
    if(left<right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
}
}

int main(){
    int sort[10]={0,1,0,0,1,1,0,1,1,1};
    sort_Array(sort,10);
    print_Array(sort,10);
    return 0;
}