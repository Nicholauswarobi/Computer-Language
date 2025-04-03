// // ENCAPSULATION 
// /*This means that the class attributes should to be public, 
// but we need to introduce class public methods to access the attributes*/

// #include <iostream>
// #include <list>
// using namespace std;


// // class 
// class YouTubeChannel{
//     private:    // Hidden the private data
//         string Name;
//         string OwnerName;
//         int SubscriberCount;
//         list<string> PublishedVideoTitle;
   
//     public:
//         YouTubeChannel(string name, string ownerName){
//             Name = name;
//             OwnerName = ownerName;
//             SubscriberCount = 0;
//         }

//         // Class method to increase subscribers
//         void Subscribers(){
//             SubscriberCount++;
//         }

//         // class method to decrease subscribers
//         void Unsubscribers(){
//             if (SubscriberCount > 0)
//                 SubscriberCount--;
//         }

//         // class method for video published
//         void PublishVideo(string title){
//             PublishedVideoTitle.push_back(title);
//         }

//         // class method to display informations
//         void Getinfo(){
//             cout << "Name of the channel: " << Name<< endl;
//             cout << "OwnerName of a channel: " << OwnerName << endl;
//             cout << "Subscribers: " << SubscriberCount << endl;
//             cout << "Video List" << endl;

//             for (string VideoList: PublishedVideoTitle){
//                 cout << VideoList << endl;
//            }
//            cout << endl;
//         }
// };

// int main(){
//     YouTubeChannel ytchannel("NunguProgemmer", "Nungu Nicholaus");
//     ytchannel.Subscribers();
//     ytchannel.Unsubscribers();
//    ytchannel.PublishVideo("HTML and CSS for Beginners");
//    ytchannel.Getinfo();

// }





// // 1. Examp0le for (Encapsulation) 
// //  Creating the Banking account class

// #include <iostream>
// using namespace std;


// // Base class 
// class BankAccount{
//     private:
//         double balance; // Hidden private data

//     public:    
//         void deposit(double amount){
//             if (amount > 0) balance += amount;
//         }

//         double GetBalance(){    // getter
//             return balance;
//         }
// };

// int main(){
//     // Creaating Object
//     double amt;
//     BankAccount acc;
//     cout << "Enter deposit amount: ";
//     cin >> amt;
//     acc.deposit(amt);

//     cout << "Balance is " << acc.GetBalance() << endl;

//     system("pause > 0");
//     return 0;
// }




// 2. Example for (Encapsulation) 
//  Creating the Student class

// #include <iostream>
// using namespace std;


// class Student{
//     private:
//         string name;
//         int age;

//     public:
//         void setName(string n){
//             if (!n.empty()) name = n;
//         }

//         void setAge(int a){
//             if (a >= 0) age = a;
//         }

//         void display_student_info(){
//             cout << "My name is " << name << ", am " << age << " years old." << endl;
//         }

// };

// int main(){
//     string name;
//     int age;
//     Student st;
//     cout << "Type your name: ";
//     cin >>name;

//     cout << "Type your age: ";
//     cin >> age;
    
//     st.setName(name);
//     st.setAge(age);
//     st.display_student_info();

//     system("pause > 0");
//     return 0;
    
// }






// // 3. Example for (Encapsulation) 
// //  Creating the User class


// #include <iostream>
// using namespace std;

// class User{
//     private:
//         string password;

//     public:
//         bool setPassword(string pwd){
//             if (pwd.length() >= 8) password = pwd;
//         }

//         bool authenticate(string pwd){
//             return (pwd == password);
//         }

// };

// int main(){
//     User user;
//     user.setPassword("secure1234");
//     cout << "Auth: " << user.authenticate("secure1234") << endl;

//     system("pause > 0");
//     return 0;
// }




// 4. Example for (Encapsulation) 
//  Creating the Employee class

#include <iostream>
using namespace std;

class Employee{
    private:
        string name;
        double salary;

    public:
        Employee(string n, double s){
            name = n;
            salary = s;
        }

        void promote(double raise){
            if (raise > 10000 ) salary += raise;
            else cout << "Insufficient, please consider  the initial balance.." << endl;
        }

        void display(){
            cout << name << " earns TZS " << salary << endl;
        }
};

int main(){
        string name;
        double amt;
        double intial_balance = 10000;

        cout << "Type name and amount ";
        cin >> name >> amt;

        Employee emp(name, amt);
        emp.promote(intial_balance);
        emp.display();
    

    system("pause > 0");
    return 0;
}

