#include<iostream>
using namespace std;
bool isPresent(int arr[][3],int rows, int col,int target ){
for(int i=0;i<rows;i++){
    for(int j=0;j<col;j++){
    if(arr[rows][col]==target)
    {
        return 1;
    }

    }
}
return 0;

}

int main(){
  int arr[3][3];
  int target;
  cin>>target;

  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
cin>>arr[i][j];
    }
    }
bool present=isPresent(arr,3,3,target);
cout<<present;




    return 0;
}