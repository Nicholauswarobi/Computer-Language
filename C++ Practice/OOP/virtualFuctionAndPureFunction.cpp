#include <iostream>
using namespace std;


// Base class
class Instrument{
    public:
        void MakeSound(){
            cout << "Instrument is playing..." << endl;

        }
};

class Accordion: public Instrument{
    public:
        void MakeSound(){
            cout << "Accordion is playing..." << endl;
        }
};

int main(){

    // Object
    Instrument I1;
    Accordion I2;
    I1.MakeSound();
    I2.MakeSound();


    
    system("pause > 0");
    return 0;
}