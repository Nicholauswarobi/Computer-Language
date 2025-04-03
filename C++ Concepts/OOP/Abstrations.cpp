#include <iostream>
using namespace std;


// // abstract class
// class SmartPhone{
//     public:
//     virtual void MakeSelfie() = 0;
//     virtual void MakeCall() = 0;

// };

// class Android:public SmartPhone{
//     public:
//         void MakeSelfie(){
//             cout << "Android is make selfie.." << endl;
//         }

//         void MakeCall(){
//             cout << "Android is make Call.." << endl;
//         }
// };

// class Iphone:public SmartPhone{
//     public:
//         void MakeSelfie(){
//             cout << "Iphone is make selfie.." << endl;
//         }

//         void MakeCall(){
//             cout << "Iphone is make Call.." << endl;
//         }
// };

// int main(){
//     SmartPhone* S1 = new Iphone();
//     S1->MakeSelfie();
//     S1->MakeCall();
// }



// // Example 1: Abstract Class
// class AbstractCalculator {
//     public:
//         virtual int calculate(int a, int b) = 0; // Pure virtual
//     };
    
//     class Adder : public AbstractCalculator {
//     public:
//         int calculate(int a, int b) override { return a + b; }
//     };
    
//     int main() {
//         AbstractCalculator *calc = new Adder();
//         cout << calc->calculate(5, 3) << endl; // 8
//         delete calc;
//         return 0;
//     }



    // // Example 2: Interface in C++ (Pure Abstract Class)
    // class IPrintable {
    //     public:
    //         virtual void print() = 0;
    //     };
        
    //     class Document : public IPrintable {
    //     public:
    //         void print() override { cout << "Printing document..." << endl; }
    //     };
        
    //     int main() {
    //         IPrintable *doc = new Document();
    //         doc->print();
    //         delete doc;
    //         return 0;
    //     }



// // Example 3: Abstract Class with Partial Implementation
// class Database {
//     public:
//         virtual void connect() = 0;
//         void testConnection() { cout << "Testing DB..." << endl; }
//     };
    
//     class MySQL : public Database {
//     public:
//         void connect() override { cout << "MySQL connected!" << endl; }
//     };
    
//     int main() {
//         Database *db = new MySQL();
//         db->connect();
//         db->testConnection();
//         delete db;
//         return 0;
//     }



// // Example 4: Hiding Complex Logic
// class Engine {
//     private:
//         void startSparkPlug() { cout << "Spark plug ignited" << endl; }
//         void injectFuel() { cout << "Fuel injected" << endl; }
    
//     public:
//         void start() {
//             startSparkPlug();
//             injectFuel();
//             cout << "Engine started!" << endl;
//         }
//     };
    
//     int main() {
//         Engine e;
//         e.start();
//         // e.injectFuel(); // Error (private)
//         return 0;
//     }




// Example 5: Abstract Class with Constructor

class Shape {
    protected:
        int sides;
    
    public:
        Shape(int s) : sides(s) {}
        virtual void draw() = 0;
    };
    
    class Triangle : public Shape {
    public:
        Triangle() : Shape(3) {}
        void draw() override { cout << "Drawing Triangle (" << sides << " sides)" << endl; }
    };
    
    int main() {
        Shape *s = new Triangle();
        s->draw(); // "Drawing Triangle (3 sides)"
        delete s;
        return 0;
    }

