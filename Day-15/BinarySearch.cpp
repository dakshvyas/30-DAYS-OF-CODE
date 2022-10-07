#include<iostream>
using namespace std;
int binary_Search(int arr[],int size ,int key){
int start=0;
int end=size-1;
int mid=start+((end-start)/2);
while(start<=end){
if (arr[mid]==key)
return mid;
if(key>arr[mid]){
start=mid+1;
}
else
end=mid-1;
mid=start+((end-start)/2);
}

return -1;
}

int main(){
 int odd[5]={2,5,6,9,12};
 int even[4]={10,21,33,56};
 int key=33;
 int index=binary_Search(even,4,key);
 if (index==-1){
    cout<<"Not found";
 }
 else 
 cout<<"The index is "<<index;
    return 0;
}