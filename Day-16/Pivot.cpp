//Find Pivot of an array
#include<iostream>
using namespace std;
int get_pivot(int arr[],int size){
int s=0;
int e=size-1;
int mid = s+(e-s)/2;
while(s<e){
    if(arr[mid]>=arr[0]){
        s=mid+1;
    }
    else
    e=mid;
mid=s+(e-s)/2;
}


}

int main(){
int arr[6]={ 3,10,17,15,2,1};
cout<<"Pivot is : "<<get_pivot(arr,6);
    return 0;
}