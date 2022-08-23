// ******************100 Days of Code **********************//
//*************************DAY-1*****************************// 


/*
******** C++ Basics******************
****Syntax*****C++ Constants*****Variables*******I/O********
*/ 


//First C++ Program

#include<iostream>//Adds functionality to c++ programs
using namespace std;// we can use names for objects and variables from the standard library.
int main(){
	int num;
    char name[10];
	cout<<"Enter your name and roll no.\n";
	cin>>name>>num; //Cascading of I/O operator
	cout<<"Name:"<<name<<"Roll no."<<num;
return 0;
}

//Creating a Simple Calculator
#include<iostream>
using namespace std;
int main(){
	int operation;
	float result,num1,num2;
	cout<<"Enter the operation you want to perform\n";
	cout<<"1-Addition\n2-Multiplication\n3)Subtraction\n4)Division\n";
	cin>>operation;
	switch(operation){
		case 1:
			cout<<"Enter two number"<<endl;
			cin>>num1>>num2;
			result=num1+num2;
			cout<<"Sum :"<<result<<endl;
			break;
			
		case 2:
			cout<<"Enter two number"<<endl;
			cin>>num1>>num2;
			result=num1*num2;
			cout<<"Multiplication :"<<result<<endl;
			break;
				
		case 4:
			cout<<"Enter two number"<<endl;
			cin>>num1>>num2;
			result=num1/num2;
			cout<<"Division :"<<result<<endl;
			break;
				
		case 3:
			cout<<"Enter two number"<<endl;
			cin>>num1>>num2;
			result=num1-num2;
			cout<<"Subtraction :"<<result<<endl;
			break;
		default:
		    cout<<"Read the question carefully";	
	}
	return 0;
}






