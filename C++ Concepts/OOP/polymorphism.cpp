
// POLYMORPHISM
/*This type of programming, the same function is used to perform different kind of operation..*/

#include <iostream>
#include <list>
#include <string>
using namespace std;


// // Parent (Base)class 
// class YouTubeChannel{
//     private:
//         string Name;

//         int SubscriberCount;
//         list<string> PublishedVideoTitle;
//     protected: // used when you need to use one of attribute from parrent class to child class like below we use OwnerName to child class
//         string OwnerName;
//         int ContentQuality;
    
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

//         // check analysis
//         void CheckAnalytics(){
//             if (ContentQuality < 5){
//                 cout << Name << " has bad content quality.." << endl;
//             } else{
//                 cout << Name << " has great content.." << endl;
//             }
//         }
// };

// // Child (Derived) Class
// class CookingYouTubeChannel:public YouTubeChannel{
//     public:
//         CookingYouTubeChannel(string name, string ownerName): YouTubeChannel(name, ownerName){

//     }

//     void Practicing(){
//         cout << OwnerName << ", You are welcome to learn how to cook different types of recipes for free...." << endl;
//         ContentQuality++;
//     }

// };


// // Child2 (Derived) Class
// class SingersYouTubeChannel:public YouTubeChannel{
//     public:
//         SingersYouTubeChannel(string name, string ownerName): YouTubeChannel(name, ownerName){

//     }

//     void Practicing(){
//         cout << OwnerName << ", You are welcome to learn how to sing and dancing a musics for free...." << endl;
//         ContentQuality++;
//     }

// };

// int main(){
//     CookingYouTubeChannel ytcooking("Empire", "Nungu");
//     SingersYouTubeChannel ytsingers("Diamond Platnumz", "Nasibu Abdul");

//     ytcooking.Practicing();

//     ytsingers.Practicing();
//     ytsingers.Practicing();
//     ytsingers.Practicing();
//     ytsingers.Practicing();
//     ytsingers.Practicing();
//     ytsingers.Practicing();
//     ytsingers.Practicing();

//     // Pointer to class and objects
//     YouTubeChannel *yt1 = &ytcooking;
//     YouTubeChannel *yt2 = &ytsingers;


//     // To access analytics method to each objects
//     yt1->CheckAnalytics();
//     yt2->CheckAnalytics();


// }




// // Example 1: Function Overloading
// class Math {
//     public:
//         int add(int a, int b) {
//              return a + b; 
//             }

//         double add(double a, double b) {
//              return a + b; 
//             }

//         string add(string a, string b) {
//              return a + b; 
//             }
//     };
    
//     int main() {
//         Math m;
//         cout << m.add(2, 3) << endl;       
//         cout << m.add(2.5, 3.7) << endl;   
//         cout << m.add("Hello", " World");
//         return 0;
//     }



// // Example 2: Operator Overloading (+)
// class Complex {
//     private:
//         double real, imag;
    
//     public:
//         Complex(double r = 0, double i = 0) : real(r), imag(i) {}
    
//         Complex operator+(Complex const &obj) {
//             return Complex(real + obj.real, imag + obj.imag);
//         }
    
//         void display() {
//             cout << real << " + " << imag << "i" << endl;
//         }
//     };
    
//     int main() {
//         Complex c1(3, 4), c2(1, 2);
//         Complex c3 = c1 + c2; // Uses overloaded +
//         c3.display(); // 4 + 6i
//         return 0;
//     }




// // Example 3: Runtime Polymorphism (Virtual Functions)

// class Animal {
//     public:
//         virtual void sound() { cout << "Animal sound" << endl; }
//     };
    
//     class Dog : public Animal {
//     public:
//         void sound() override { cout << "Bark!" << endl; }
//     };
    
//     class Cat : public Animal {
//     public:
//         void sound() override { cout << "Meow!" << endl; }
//     };
    
//     int main() {
//         Animal *a1 = new Dog();
//         Animal *a2 = new Cat();
//         a1->sound(); // Bark! (Dog's version)
//         a2->sound(); // Meow! (Cat's version)
//         delete a1, a2;
//         return 0;
//     }




//    // Example 4: Pure Virtual Function (Abstract Class)

    // class Shape {
    //     public:
    //         virtual void draw() = 0; // Pure virtual
    //     };
        
    //     class Circle : public Shape {
    //     public:
    //         void draw() override { cout << "Drawing Circle" << endl; }
    //     };
        
    //     int main() {
    //         Shape *s = new Circle();
    //         s->draw(); // Calls Circle's draw()
    //         delete s;
    //         return 0;
    //     }



// Example 5: Polymorphic Array

class Animal {
    public:
        virtual void sound() = 0;
    };
    
    class Lion : public Animal {
    public:
        void sound() override { cout << "Roar!" << endl; }
    };
    
    class Bird : public Animal {
    public:
        void sound() override { cout << "Chirp!" << endl; }
    };
    
    int main() {
        Animal *animals[2] = { new Lion(), new Bird() };
        animals[0]->sound(); // Roar!
        animals[1]->sound(); // Chirp!
        delete animals[0], animals[1];
        return 0;
    }



