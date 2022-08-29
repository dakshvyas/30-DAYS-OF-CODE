//*********************************************Day-4********************************************************
//Encapsulation ,Data Abstraction and Inheritance
#include<iostream>
using namespace std;

/*class AbstractEmployee{
	virtual void AskforPromotion()=0;
};
*/

class Employee//:AbstractEmployee{
{
private:
string Company;
int Age;

protected:
string Name;

public:
/*void setName(string name){
	Name=name;
}
string getName(){
	return Name;
}
void setCompany(string company){
	Company=company;
}
string getCompany(){
	return Company;
}
void setAge(int age){
	Age=age;
}
int getAge(){
	return Age;
}
*/


/*void Introduce(){
	cout<<"You are"<<Name<<endl;
	cout<<"Your age is"<<Age<<endl;
	cout<<"Your company is"<<Company<<endl;
}		
*/
Employee(string name,string company,int age){
	Name = name;
	Company=company;
	Age=age;
}

void AskforPromotion(){
	if (Age>20)
	cout<<"You are promoted ";
	else 
	cout<<"No promotion for you";
}	


};

class Developer:public Employee{
public:
string FavProgramminglanguage;
Developer(string name,string company,int age,string favProgramminglanguage ):Employee(name,company,age)		
{
	FavProgramminglanguage=favProgramminglanguage;
	
}	
void FixBug(){
	cout<<Name<<"fixed bug using"<<FavProgramminglanguage;
}	
	
};
int main(){
	Employee employee1=Employee("Daksh","SELF",19);
	//employee1.Introduce();
	//employee1.AskforPromotion();
	 
	Developer d=Developer("Daksh","Self",35,"C++");
	d.FixBug();
	
	return 0;
}


