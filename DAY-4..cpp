//***********************************************DAY-4*****************************************************
//Polymorphism
#include<iostream>
using namespace std;

class Employee{
	private:
		string Company;
		int Age;
	protected:
	    string Name;
	public:
Employee(string name,string company,int age){
	Name=name;
	Company=company;
	Age=age;	
}
virtual void Work(){
	cout<<Name<<"is checking backlog,emails,performing tasks";
}
		
};
class Developer:public Employee{
	public:
		string FavProgrammingLanguage;
Developer(string name,string company,int age,string favProgrammingLanguage):Employee(name,company,age){
	FavProgrammingLanguage=favProgrammingLanguage;
}
	void Work(){
	cout<<Name<<" is learning "<<FavProgrammingLanguage<<endl; 
}
		
};
class Teacher:public Employee{
	public:
		string Subject;
Teacher(string name,string company,int age,string subject):Employee(name,company,age){
	Subject=subject;
}
	void Work(){
	cout<<Name<<" is teaching "<<Subject<<endl; 
}
		
};
int main(){
	Developer d=Developer("Daksh","SELF",19,"C++");
	Teacher t=Teacher("Jack","Cool School",45,"History");
	t.Work();
	d.Work();
	Employee *e1=&d;
	Employee*e2=&t;
	e1->Work();
	e2->Work();
	return 0;
}