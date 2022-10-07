#include<iostream>
using namespace std;
int first_ocurrence(int arr[],int size,int key){
int start=0;
int end=size-1;
int mid=start+(end-start)/2;
int ans=-1;
while(start<=end){
    if(arr[mid]==key){
        ans=mid;
        end=mid-1;
    }
    else if(key>arr[mid]){
   start=mid+1;
    }
  else if(key < arr[mid]){
  end=mid-1;
  }
 mid=start+(end-start)/2;

}
return ans;
}

int last_occurence(int arr[],int size,int key){
int start=0;
int end=size-1;
int mid=start+(end-start)/2;
int ans=-1;
while(start<=end){
    if(arr[mid]==key){
        ans=mid;
        start=mid+1;
    }
    else if(key>arr[mid]){
   start=mid+1;
    }
  else{
  end=mid-1;
  }
 mid=start+(end-start)/2;

}
return ans;
}


int main(){
int odd[5]={1,2,3,3,3};
cout<<" The first ocurrence of 3 is "<<first_ocurrence(odd,5,3)<<endl;
cout<<" The last  ocurrence of 3 is "<<last_occurence(odd,5,3);

return 0;
}