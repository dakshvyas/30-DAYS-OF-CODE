//********************************************DAY-3********************************************************
//Encapsulation
#include<iostream>
using namespace std;

class Employee{
private:
	string Name;
	string Company;
	int Age;
public:
void Introduce(){
	cout<<"Name is :"<<Name<<endl;
	cout<<"Company is :"<<Company<<endl;
	cout<<"Age is :"<<Age<<endl;
}	
void setName(string name){//Using get and set methods to access properties of a private data of class
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

Employee(string name,string company,int age){
	Name=name;
	Company=company;
	Age =age;
	
}
};

int main(){
	Employee employee1=Employee("Daksh","SELF",10);
	employee1.setAge(19);
	employee1.setCompany("SELF");
	employee1.setName("Daksh");
	employee1.setAge(39);
    cout<<employee1.getName()<<"\n"<<employee1.getAge()<<endl;
	return 0;
}
