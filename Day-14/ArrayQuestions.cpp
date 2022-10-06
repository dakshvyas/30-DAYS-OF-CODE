//Swap alternates
#include<iostream>
using namespace std;

void print_Array(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"\t";
    }

}

void swap_Alternates(int arr[],int size){
for(int i=0;i<size;i+=2){
    if((i+1)<size){
    swap(arr[i],arr[i+1]);
    }
}

}
int main(){
int odd[5]={10,20,30,40,50};
int even[4]={11,22,33,44};
//for odd
swap_Alternates(odd,5);
print_Array(odd,5);
cout<<endl;
//for even
swap_Alternates(even,4);
print_Array(even,4);

    return 0;
}