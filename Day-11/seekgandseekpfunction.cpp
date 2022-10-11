//seekp() and seekg()

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream fout;
    fout.open("New.txt",ios::ate|ios::app);
    cout<<fout.tellp();
    fout<<"ABCDEFG";
    cout<<fout.tellp();
    fout.seekp(2,ios_base::beg);
    cout<<fout.tellp();
    fout.close();
    return 0;
}


int main(){
    ifstream fin;
    fin.open("New.txt");
    cout<<fin.tellg();
    cout<<(char)fin.get();
     cout<<fin.tellg();
     fin.seekg(6);
     cout<<fin.tellg();
      cout<<(char)fin.get();
     cout<<fin.tellg();
     fin.seekg(-2,ios_base::end);
       cout<<fin.tellg();   
    return 0;
}