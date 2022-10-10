//Reverse an array using STL
#include<iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector <int >arr){
    int s=0,e=arr.size()-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    return arr;
}
void print(vector<int>v){
    int l=v.size()-1;
    for(int i=0;i<=l;i++){
        cout<<v[i];
    }
}


int main(){
vector <int> v;
v.push_back(10);
v.push_back(20);
v.push_back(30);
v.push_back(40);
vector <int>ans=reverse(v);
print(ans);
    return 0;
}