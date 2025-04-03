//  CHECK PRIME NUMBER FOR ANY RANGE

// SOLUTION
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int num;

    cout <<"Enter any range number: ";
    cin >> num;

    for(int i = 2; i <= num; i++){
        bool isPrime = true;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime){
            cout << i << ", ";
        }
    }

    return 0;
}



