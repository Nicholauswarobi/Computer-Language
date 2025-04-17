#include <iostream>
using namespace std;

// // How to Create Friend Function
// class Square{
//     private:
//         float side;
//         float Area;
//         float Circumference;

//     public:

//         void SetSide(float Length){
//             side = Length;
//             Area = Length * 2;
//             Circumference = Length * 4;
//         }

//     // Created here the friend fuction
//     friend void PrintInfo(Square);
// };

// // This is the friend Function
// void PrintInfo(Square sq){
//     cout << "Circumference: " << sq.Circumference << endl;
//     cout << "Area: " << sq.Area << endl;
// }

// int main(){

//     Square sq;
//     sq.SetSide(4);

//     PrintInfo(sq);

//     cin.get();
// }







// How to Create Friend Class
class Square{
    private:
        float side;
        float Area;
        float Circumference;

    public:

        void SetSide(float Length){
            side = Length;
            Area = Length * 2;
            Circumference = Length * 4;
        }

    // Created here the friend Class
    friend class HomeWork;
};

class HomeWork{
    public:
        void PrintInfo(Square sq){
            cout << "Circumference: " << sq.Circumference << endl;
            cout << "Area: " << sq.Area << endl;
        }
    
};

int main(){

    Square sq;
    sq.SetSide(4);
    HomeWork h;

    // This is How to print friend class info
    h.PrintInfo(sq);

    cin.get();
}

