// String Function 
/*
    strlen(s) ---To get the length of string
    strcpy(s1, s2) --- to copy string here string s2 is copied into string s1
    strcat(s1, s2) -- to add two string
    strcmp(s1, s2) --- to compare two string
    strrev(s)-- to reverse the string
    strupr(s)--- to convert string to uppercase
    strlwr(s)--- to convert to lowercase
    strcmpi(s1, s2) -- to compare two string but ignore sensitivity means 'a' and 'A' are  treated as same..

*/


#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main(){
    char name1[200] = "Nicholaus";
    char name2[200] = "Nungu";
    char name3[200] = "Nungu";

    cout << endl;
    cout << "The length of a name "<< strlen(name1) << endl;
    cout << "The copy of a name " << strcpy(name1, name2)<< endl;
    cout << "The compare of a names "<< strcmp(name2, name3) << endl;
    cout << "The add a name "<< strcat(name1, name2)<< endl;
    cout << "The reverse a name "<< strrev(name1) <<  endl;
    cout << "The uppercase a name "<< strupr(name1)<< endl;
    cout << "The lowercase a name "<< strlwr(name1)<< endl;
    cout << "The comapare and ignore of a name " << strcmpi(name2, name3)<< endl;
    cout << endl;

return 0;
    
}