//Structures with member function and variables
#include<iostream>
using namespace std;
struct Book
{
   int bookid;
   char Name[20];
   float price;

   void input(){
    cout<<"Enter bookid,Name,and price";
    cin>>bookid>>Name>>price;
   }
   void display(){
    cout<<bookid<<Name<<price;
   }
};


  int main(){
  Book b1;
  b1.input();
  b1.display();
    return 0;
} 
// Access specifiers in C++
#include<iostream>
using namespace std;
struct Book
{
    private:
   int bookid;
   char Name[20];
   float price;
   public:
   void input(){
    cout<<"Enter bookid,Name,and price";
    cin>>bookid>>Name>>price;
    if (bookid<0)
    bookid=-bookid;

   }
   void display(){
    cout<<bookid<<Name<<price;
   }
};


  int main(){
  Book b1;
  b1.input();
  b1.display();
    return 0;
  }