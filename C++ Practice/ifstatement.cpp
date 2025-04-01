#include <iostream>

using namespace std;

int main(){
    int num1, num2;

    cout << "Enter two integer: ";
    cin >> num1 >> num2;

    if (num1 == num2){
        cout << num1 <<" == "<<num2<<endl;
    }

    if (num1 != num2){
        cout << num1 <<" != "<<num2<<endl;
    }

    if (num1 > num2){
        cout << num1 <<" is greater than "<< num2<<endl;
    }

    if (num1 < num2){
        cout << num1 << " is less than "<<num2<<endl;
    }

    if (num1 <= num2){
        cout <<num1 << " is less or equal to "<< num2<<endl;
    }

    if (num1 >= num2){
        cout<< num1 << " is greater or equal "<<num2<<endl;
    }

    return 0;
}