#include<iostream>
#include<fstream>
using namespace std;
int main() {
   ofstream fout("project.doc");
   fout<<"I bought the new car";
   fout.close();
   ifstream fin("project.doc");
   string line;
   getline(fin,line);
   cout<<line;
   fin.close();
}
