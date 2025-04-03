// #include <iostream>
// using namespace std;


// class Student{
//     public:
//         string name;
//         int age;
//         string gender;

//     // Pure virtual function
//         virtual void Studying() = 0;

// };

// class ProgrammingStudent: public Student{
//     public:
//         void Studying(){
//             cout << "student is studying programming" << endl;
        
//         }
// };

// class ArtsStudent: public Student{
//     public:
//         void Studying(){
//             cout << "student is studying painting" << endl;
        
//         }
// };

// class MusicStudent: public Student{
//     public:
//         void Studying(){
//             cout << "student is playing piano" << endl;
        
//         }
// };

// int main(){
//     Student* student[3];
//     student[0] = new ProgrammingStudent();
//     student[1] = new ArtsStudent();
//     student[2] = new MusicStudent();

//     for (int i = 0; i <= 2; i++){
//        student[i]->Studying();
//     }
    
//     // Deallocate memory
//     for (int i = 0; i <= 2; i++){
//         delete student[i];
//     }
// }




// Creating class of Moaster and explain each acts

#include <iostream>
using namespace std;

class Moaster{
    public:
        string name;

    virtual void Attacking() = 0;

};

class Vampair: public Moaster{
    public:
        void Attacking(){
            cout << "attacking by suck the blood.." << endl;
        }
};


class Zombie: public Moaster{
    public:
        void Attacking(){
            cout << "attacking by eating body meat.." << endl;
        }
};


class Dragon: public Moaster{
    public:
        void Attacking(){
            cout << "attacking firing.." << endl;
        }
};
int main(){
    Moaster* moaster[3];
    moaster[0] = new Vampair();
    moaster[1] = new Zombie();
    moaster[2] = new Dragon();

    for (int i = 0; i <= 2; i++){
        moaster[i]->Attacking();
    }

    for (int i = 0; i <= 2; i++){
        delete moaster[i];
    }
}