// // INHERITANCE
// /*The process of getting the property of one class into another class.*/

// #include <iostream>
// #include <list>
// using namespace std;


// // Parent (Base)class 
// class YouTubeChannel{
//     private:
//         string Name;

//         int SubscriberCount;
//         list<string> PublishedVideoTitle;
//     protected: // used when you need to use one of attribute from parrent class to child class like below we use OwnerName to child class
//         string OwnerName;
    
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
//             }
//             cout << endl;
//         }
// };

// // Child (Derived) Class
// class CookingYouTubeChannel:public YouTubeChannel{
//     public:
//         CookingYouTubeChannel(string name, string ownerName): YouTubeChannel(name, ownerName){

//     }

//     void PracticingCooking(){
//         cout << OwnerName << ", You are welcome to learn how to cook different types of recipes for free...." << endl;
//     }

// };
// int main(){
//     CookingYouTubeChannel ytcooking("Empire", "Nungu");
//     ytcooking.PublishVideo("Tambi yai");
//     ytcooking.PublishVideo("Ndazi Nyama");
//     ytcooking.Subscribers();    
//     ytcooking.Subscribers();
//     ytcooking.Getinfo();
//     ytcooking.PracticingCooking();


//     YouTubeChannel ytchannel("NunguProgemmer", "Nungu Nicholaus");
//     ytchannel.Subscribers();
//     ytchannel.Unsubscribers();
//     ytchannel.PublishVideo("HTML and CSS for Beginners");
//     ytchannel.Getinfo();

// }





// // Example 1: Single Inheritance
// #include <iostream>
// using namespace std;

// class Animal {
//     public:
//         void eat() { cout << "Eating..." << endl; }
//     };
    
//     class Dog : public Animal {
//     public:
//         void bark() { cout << "Barking!" << endl; }
//     };
    
//     int main() {
//         Dog d;
//         d.eat();  // Inherited
//         d.bark(); // Own method
//         return 0;
//     }



// // Example 2: Multilevel Inheritance
// #include <iostream>
// using namespace std;

// class Vehicle {
//     public:
//         void drive() { cout << "Driving..." << endl; }
//     };
    
//     class Car : public Vehicle {
//     public:
//         void honk() { cout << "Honk!" << endl; }
//     };
    
//     class SportsCar : public Car {
//     public:
//         void turbo() { cout << "Turbo Boost!" << endl; }
//     };
    
//     int main() {
//         SportsCar sc;
//         sc.drive(); // From Vehicle
//         sc.honk();  // From Car
//         sc.turbo(); // Own method
//         return 0;
//     }





// // Example 3: Multiple Inheritance

// #include <iostream>
// using namespace std;

// class A {
//     public:
//         void showA() { cout << "A" << endl; }
//     };
    
//     class B {
//     public:
//         void showB() { cout << "B" << endl; }
//     };
    
//     class C : public A, public B {};
    
//     int main() {
//         C obj;
//         obj.showA(); // From A
//         obj.showB(); // From B
//         return 0;
//     }




// // Example 4: Hierarchical Inheritance

// #include <iostream>
// using namespace std;

// class Shape {
//     public:
//         virtual void draw() = 0; // Pure virtual (abstract)
//     };
    
//     class Circle : public Shape {
//     public:
//         void draw() { cout << "Drawing Circle" << endl; }
//     };
    
//     class Square : public Shape {
//     public:
//         void draw() { cout << "Drawing Square" << endl; }
//     };
    
//     int main() {
//         Shape *s1 = new Circle();
//         Shape *s2 = new Square();
//         s1->draw(); // Circle's draw()
//         s2->draw(); // Square's draw()
//         delete s1, s2;
//         return 0;
//     }




    


//  Example 5: Hybrid Inheritance

/*Explanation: Intern inherits from both Student and Worker (multiple + hierarchical).
*/
#include <iostream>
using namespace std;


class Person {
    public:
        void sleep() { cout << "Sleeping..." << endl; }
    };
    
    class Student : public Person {
    public:
        void study() { cout << "Studying..." << endl; }
    };
    
    class Worker : public Person {
    public:
        void work() { cout << "Working..." << endl; }
    };
    
    class Intern : public Student, public Worker {};
    
    int main() {
        Intern i;
        i.study(); // From Student
        i.work();  // From Worker
        // i.sleep(); // Error (ambiguous)
        return 0;
    }

