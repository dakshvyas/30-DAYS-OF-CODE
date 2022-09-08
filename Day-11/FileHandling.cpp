//Data write and read
#include<fstream>
#include<iostream>
using namespace std;
int main(){
    //ofstream fout;
    ifstream fin;
    char ch;
   /* fout.open("New file");
    fout<<"Hello";
    fout.close();
    */
    fin.open("New file");
    //fin>>ch;
    ch=fin.get();
    while (!fin.eof())
    {
     cout<<ch;
     //fin>>ch;
     ch=fin.get();
    }
    fin.close();
    return 0;
}