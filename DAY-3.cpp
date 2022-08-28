//**************************************************Day-3*************************************************
//OOPS in C++
//Show data of an employee
#include<iostream>
using namespace std;

class Employee{
// There are three types of access specifiers 1)public,2)private,3)protected
public:	//By default the access specifier is private
	string Name;
	string Company;
	int age ;
void Introduce(){
	cout<< "The name of employee is"<<Name<<endl;
    cout<<"The name of company is"<<Company<<endl;
    cout<<"The age of employee is"<<age<<endl;
}
	
};

int main(){
 Employee employee1;
 employee1.Name="DAKSH VYAS";
 employee1.Company="SELF";
 employee1.age=19;
 employee1.Introduce();
  
 Employee employee2;
 employee2.Name="DOnt know";
 employee2.Company="Own";
 employee2.age=99;
 employee2.Introduce();
}
 
 
 // There is a problem that if we want to do this process for more employees it will be tedious task 
 //So we came up with constructors
 /*-A contructor doesnt have any return type
   -A constructor will have same class name 
   -A constructor must be public
 */
 //Using Constructors

#include<iostream>
using namespace std; 

class Employee{
public:	
	string Name;
	string Company;
	int age;
	
void Introduce()
{
	cout<<"Name is: "<<Name<<endl;
	cout<<"COmpany is: "<<Company<<endl;
	cout<<"Age is: "<<age<<endl;
	}	
Employee(string name,string company,int Age){     //This is a constructor
	Name=name;
	Company=company;
	age =Age;	
}	


}; 
 
int main(){
	
	Employee employee1=Employee("Daksh","SELF",19);
	employee1.Introduce();
	Employee employee2=Employee("vyas","Own",99);
	employee2.Introduce();
	return 0;
} 
 
 
 
 
 
 
 
 