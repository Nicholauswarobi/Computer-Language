// #include <iostream>
// using namespace std;

// int main(){
//     int num;

//     cout << "Enter any integer: ";
//     cin >> num;

//     while (num <= 10){
//         cout << num << ", ";
//         num++;
//     }
    
// }


// // User validation

// #include <iostream>
// using namespace std;

// int main(){
//     int num;

//     cout << "Enter positive number: ";
//     cin >> num;

//     while (num <=0){
//         cout << "Invalid input! Please enter positive number. ";
//         cin >> num;
//     }

//     cout << "You entered " << num << endl;

//     return 0;
// }



// //  check for GCD (Greatest Common dividor)
// #include <iostream>
// using namespace std;

// int main(){
//     int a, b;

//     cout << "enter two integer: ";
//     cin >> a >> b;

//     while (a != b){
//         if (a > b){
//             a -= b;
//         }

//         else{
//             b -= a;
//         } 
  
//     }

//     cout << "GCD is " << a;
// }




// //  Reversing number
// #include <iostream>
// using namespace std;

// int main(){
//     int num, reversed = 0;

//     cout << "Enter a number: ";
//     cin >> num;

//     while (num != 0){
//         int digit = num%10;

//         reversed = reversed * 10 + digit;
//         num /=10;
//     }

//     cout << "The reversed number is " << reversed << endl;

//     return 0;
// }



//  Checking if a number is prime

#include <iostream>
using namespace std;

int main(){
    int num, i = 2;
    bool isPrime = true;
    cout << "Enter a number: ";
    cin >> num;

    while (i <= num / 2){
        if (num % i == 0){
            isPrime = false;
            break;
        }
        i++;
    }

    if (isPrime){
        cout << num << " is prime number.." << endl;
    }

    else{
        cout << num << " is not prime number.." << endl;
    }
}
