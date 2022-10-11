//tellg() and tellp() function
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream fin;
    char ch;
    fin.open("Daksh.txt");
    int pos;
    pos=fin.tellg();
    cout<<pos;
    fin>>ch;
    pos=fin.tellg();
    cout<<pos;
    return 0;
}



#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fout;
    char ch;
    fout.open("Daksh.txt",ios::app);
    int pos ;
    pos=fout.tellp();
    cout<<pos;
    fout<<"Daksh Vyas";
    fout.close();
    return 0;
}

