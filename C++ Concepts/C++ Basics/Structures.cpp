#include <iostream>
using namespace std;

// Creating Structure Variable
struct SmartPhone {
    string name;
    int StorageSpace;
    double Price;
    string color;
};

struct Person{
    string name;
    int age;
    SmartPhone smartPhone;
};

// Function to display person info
void PrintSmartPhoneInfo(SmartPhone Mysmartphone){
    cout << "SmartPhone name: " << Mysmartphone.name << endl;
    cout << "Storage Space: " << Mysmartphone.StorageSpace << "GB" << endl;
    cout << "Color: " << Mysmartphone.color << endl;
    cout << "Price: " << Mysmartphone.Price << endl;
}

void PrintPersonInfo(Person personInfo){
    cout << "Person name: " << personInfo.name << endl;
    cout << "Age: " << personInfo.age << endl;
    PrintSmartPhoneInfo(personInfo.smartPhone);
}



int main(){
    SmartPhone smartphone;
    smartphone.name = "Infinix Hot 50i";
    smartphone.StorageSpace = 128;
    smartphone.color = "Black";
    smartphone.Price = 390000;

    SmartPhone smartphon2;
    smartphon2.name = "IPhone 12 pro";
    smartphon2.StorageSpace = 250;
    smartphon2.color = "Black";
    smartphon2.Price = 5600000;

    Person person;
    person.name = "Nungu";
    person.age = 20;
    person.smartPhone = smartphon2;

    // Print the info
    PrintPersonInfo(person);



    cin.get();

}
