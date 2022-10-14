#include<iostream>
#include<vector>
using namespace std;

//Time Complexity of this function is O(n^2)
bool isprime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i<n;i++){

        if(n%i==0){
        return false;
        }
    }
return true;
    
}

//Time complexity of this function is O(n*log(logn)) 
class Solution {
public:
    int countPrimes(int n) {
        int cnt=0;
        vector<bool> prime(n+1,true);
        prime[0]=prime[1]=false;
        for(int i=2;i<n;i++){
            
            if(prime[i]){
                cnt++;
                
                for(int j=2*i;j<n;j=j+i){
                    
                    prime[j]=false;
                }
                
            }
            
            
        }
        
        return cnt;
        
    }
};

int main(){


    return 0;
}
