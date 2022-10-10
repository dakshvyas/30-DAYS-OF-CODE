//Move 0 to right
#include<iostream>
using namespace std;
void move_right(int arr[],int size){
int i=0,j=0;
for(;j<size;j++){
    if(arr[j]!=0){
        swap(arr[j],arr[i]);
        i++;
    }
}
}

void print(int arr[],int size){
    for(int i=0;i< size;i++){
        cout<<arr[i]<<"  ";
    }
}
int main(){
int arr[5]={4,0,2,0,3};
move_right(arr,5);
print(arr,5);
    return 0;
}