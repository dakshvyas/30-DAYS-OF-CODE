#include<iostream>
using namespace std;
struct  Employee
{
    int id;
    char Name[20];
    int Age=20;
}e2;

int main(){
    Employee e1={101,"Daksh",19};
    std::cout<<e1.Age<<endl;
    std::cout<<e1.Name<<endl;
    std::cout<<e1.id<<endl;
    std::cout<<e2.Age;
    return 0;
}

//Structures using function
#include<iostream>
using namespace std;
struct Book
{
    int bookid;
    char BookName[20];
    float price;
};
Book input();
void display(Book);

int main(){
  Book b1;
  b1=input();
  display(b1);
    return 0;
}
void display(Book b){
    cout<<b.bookid<<b.BookName<<b.price;
}

Book input(){
    Book b;
    cout<<"Enter book id,Book NAme , And price";
    cin>>b.bookid>>b.BookName>>b.price;
    return b;
}