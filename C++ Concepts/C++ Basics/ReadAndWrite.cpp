#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){

    // How to write content in a file
    fstream Myfile;
    Myfile.open("Nungu.txt", ios::out); // Mode for writing content in the file
    if (Myfile.is_open()){
        Myfile << "Hellow\n";
        Myfile << "I like programming Language like C++ \n";
        Myfile.close();
    }


    Myfile.open("Nungu.txt", ios::app); // Mode for append add content into existing file
    if (Myfile.is_open()){
        Myfile << "Hellow2\n";
        Myfile << "I like programming Language like Python \n";
        Myfile.close();
    }


    // For Reading content from existing file

    Myfile.open("Nungu.txt", ios::in); // Mode for reading content from existing file
    if (Myfile.is_open()){
       string line;
       while(getline(Myfile, line)){
        cout << line << endl;
       }
        Myfile.close();
    }

    cin.get();
}