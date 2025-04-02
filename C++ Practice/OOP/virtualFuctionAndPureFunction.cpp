#include <iostream>
using namespace std;


// Base class
class Instrument{
    public:
        // For function to be virtual must have virtual keyword
        virtual void MakeSound() = 0;
};

class Accordion: public Instrument{
    public:
        void MakeSound(){
            cout << "Accordion is playing..." << endl;
        }
};

class Piano: public Instrument{
    public:
        void MakeSound(){
            cout << "Piano is playing..." << endl;
    }
};

int main(){

    // Object
    Instrument* I1 = new Accordion();
    Instrument* I2 = new Piano();
    I1->MakeSound();
    I2->MakeSound();
    
    system("pause > 0");
    return 0;
}
