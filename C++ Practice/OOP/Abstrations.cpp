#include <iostream>
using namespace std;


// abstract class
class SmartPhone{
    public:
    virtual void MakeSelfie() = 0;
    virtual void MakeCall() = 0;

};

class Android:public SmartPhone{
    public:
        void MakeSelfie(){
            cout << "Android is make selfie.." << endl;
        }

        void MakeCall(){
            cout << "Android is make Call.." << endl;
        }
};

class Iphone:public SmartPhone{
    public:
        void MakeSelfie(){
            cout << "Iphone is make selfie.." << endl;
        }

        void MakeCall(){
            cout << "Iphone is make Call.." << endl;
        }
};

int main(){
    SmartPhone* S1 = new Iphone();
    S1->MakeSelfie();
    S1->MakeCall();
}