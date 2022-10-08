//Square Root of a number
#include<iostream>
using namespace std;
long long int Sqrt_Integer(int n){
    int s=0;
    int e=n;
    long long int mid=s+(e-s)/2;
    long long int ans=-1;
    while(s<=e){
        long long int square =mid *mid;
        if(square==n){
            return mid;
        }
        if(square<n){
            ans=mid;
            s=mid+1;
        }
    else {
        e=mid-1;
    }
    mid=s+(e-s)/2;
    
    }
return ans;

}

double more_Precision(int n,int precision,int tempSol){
double factor=1;
double ans=tempSol;
for (int i=0;i<precision;i++ ){
    factor=factor/10;
for(double j=0;j*j<n;j=j+factor){
    ans=j;
}


}
return ans;
}


int main(){
    int number;
    cout<<"Enter the number";
    cin>>number;
    int tempSol=Sqrt_Integer(number);
    cout<<"Answer is "<< more_Precision(number,3,tempSol)<<endl;
    return 0;

}