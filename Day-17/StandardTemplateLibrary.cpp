//STL
#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<list>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<algorithm>
using namespace std;
int main(){
/*
//Array
array<int,4> a={10,20,30,40};
int size =a.size();
cout<<"Size of array is : "<<size<<endl;
for(int i=0 ;i<size;i++)
cout<<a[i]<<endl;
cout<<"Element at 2nd index :"<<a.at(2)<<endl;
cout<<"First Element is : "<<a.front()<<endl;
cout<<"Last lement is : "<<a.back()<<endl;
cout<<"Empty or Not "<<a.empty();
//Vector
vector<int>b;
cout<<"Capacity-> "<<b.capacity()<<endl;
b.push_back(3);
cout<<"Capacity-> "<<b.capacity()<<endl;
b.push_back(4);
cout<<"Capacity-> "<<b.capacity()<<endl;
b.push_back(5);
cout<<"Capacity-> "<<b.capacity()<<endl;
cout<<"Size of vector is-> "<<b.size()<<endl;
cout<<" Element at index 1 is: "<<b.at(1);
cout<<" First Element -> "<<b.front();
cout<<"Last element is ->"<<b.back()<<endl;
for(int i:b)
cout<<i;
vector<int> c(5,1);
for(int i:c){
    cout<<i;
}
vector<int>last(c);
for (int i:last)
    cout<<"\n"<<i;
// Dequeue
deque<int>d;
d.push_front(11);
d.push_front(22);
d.push_back(55);
cout<<"Size of Queue is : "<<d.size()<<endl;
for(int i:d)
cout<<i;
cout<<"Value at index 2 is "<<d.at(2)<<endl;
d.erase(d.begin(),d.begin()+1);
for(int i:d){
    cout<<i<<" ";
}


//List

list<int> l;
l.push_front(30);
l.push_back(40);
l.push_front(31);
cout<<"Fisrt element"<<l.front()<< endl;
cout<<"Last element is "<<l.back()<<endl;
for(int i:l)
cout<<i;

//Stack

stack<int> s;
cout<<s.empty();
s.push(100);
s.push(200);
s.push(300);
s.push(400);
cout<<"\n";
cout<<"Size is : " <<s.size()<<endl;
s.pop();
cout<<" " << s.top();

//Queue

queue <string>q;
q.push("Daksh");
q.push("Dhaka");
q.push("Dwar");
cout<<q.front()<<endl;
q.pop();
cout<<q.front();



//Priority Queue

priority_queue<int> maxi;
maxi.push(1);
maxi.push(3);
maxi.push(2);
maxi.push(0);
int n=maxi.size();
for(int i =0;i<n;i++){
    cout<<maxi.top();
    maxi.pop();
}


//Set
set<int> se;
se.insert(15);
se.insert(25);
se.insert(35);
se.insert(45);
se.insert(55);
for(auto i:se)
cout<<i<<" "; 
se.erase(se.begin());
set<int>::iterator it=se.begin();
it++;
se.erase(it);
for(auto i:se)
cout<<i<<" "; 


//Map

map<int,string>m;
m[1]="Daksh";
m[13]="Vyas";
m[5]="Shift";
m.insert({3,"Bheem"});
for(auto i:m)
cout<<i.first<<" "<<i.second<<endl;
cout<<"Finding "<<m.count(5);
m.erase(13);
for(auto i:m)
cout<<i.first<<" "<<i.second<<endl;


auto it=m.find(3);
for(auto i=it;i!=m.end();i++){
    cout<<(*i).first<<endl;
}

*/
//STL Algorithm
vector<int>v;
v.push_back(10);
v.push_back(20);
v.push_back(30);
v.push_back(40);
cout<<binary_search(v.begin(),v.end(),30);

    return 0;
}