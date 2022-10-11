//Add two array
#include<iostream>
#include<vector>
using namespace std;

 vector<int> reverse_Array(vector<int> ans){
int size=ans.size();
int start=0,end=size-1;
while(start<=end){
swap(ans[start],ans[end]);
start++;
end--;
}
return ans;
}

vector<int> add_Array(vector<int> arr1,vector<int> arr2,int n,int m){
vector <int> ans;
int i=n-1;
int j=m-1;
int carry=0;
int sum=0;
while(i>=0 && j>=0){
int val1=arr1[i];
int val2=arr2[j];
sum=val1+val2+carry;
carry=sum/10;
sum=sum%10;
ans.push_back(sum);
i--;
j--;
}

while(i>=0){
 sum=carry+arr1[i];
 carry=sum/10;
 sum=sum%10;
 ans.push_back(sum);
 i--;
}
while(j>=0){
 sum=carry+arr2[j];
 carry=sum/10;
 sum=sum%10;
 ans.push_back(sum);
j--;
}
while(carry!=0){
    ans.push_back(carry);
}

ans =reverse_Array(ans);
return ans;
}

void print(vector<int> ans){
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<< " ";
}
}
int main(){
vector<int> arr1;
vector<int> arr2;
vector<int> ans;
arr1={1,6,4,5};
arr2={2,7,8};
int n=arr1.size();
int m=arr2.size();
ans=add_Array(arr1,arr2,n,m);
print(ans);

    return 0;
}
