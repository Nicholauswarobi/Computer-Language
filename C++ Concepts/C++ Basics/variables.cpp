#include <iostream>

using namespace std;

int main(){

    string name;
    int age;
    int year_born;
    int current_year;

    cout <<"\nEnter your name: ";
    getline(cin, name);

    cout << "Enter your year of born: ";
    cin >> year_born;

    age = 2025-year_born;

    cout << "\nMy name is "<<name<<"."<<endl;
    cout <<"My age is "<<age<<" years old."<<endl;

    return 0;
}