//*************************************100-DAYS-OF-CODES***************************************************
//*********************************************DAY-2**************************************************** 
//**Basic Sntax(Variables,Constants,Data Types,Comments,Modifiers,Keywords,C++ operators)**RECURSION PROBLEM**** 
//Sum of n numbers using recursive function 
#include<iostream>
using namespace std;
int rec_func(int a);
int main()
{
	int num,sum;
	cout<<"Enter the number\n";
	cin>>num;
	sum=rec_func(num);
	cout<<"So the sum of n numbers is:"<<sum;
	return 0;
}

int rec_func(int a){
	int sum;
	if (a==1){
		return a;
	}
    sum=a+rec_func(a-1);
    return sum;
}









