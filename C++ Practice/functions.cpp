// // Functions with no return type and no paramenters

// //  Example 1 of add two integer
// #include <iostream>
// using namespace std;


// // function definition
// void add(){
//     int x, y, z;

//     cout << "enter two numbers: ";
//     cin >> x >> y;

//     z = x + y;

//     cout << "The sum is "<< z << endl;
// }

// int main(){
//     // call add() function in the main function for execution
//     add();

//     return 0;
// }



// //  2 Example CHECK THE CHARACTER IS VOWEL OR CONSONENT

// #include <iostream>
// using namespace std;

// void checkVowelConsonent(){
//     char ch;
//     cout << "Enter a characher: ";
//     cin >> ch;

//     if (ch == 'a' || ch == 'e' || ch == 'i'|| ch == 'o' || ch == 'u'){
//         cout << "The character is vowel..." << endl;
//     } else {
//         cout << "The character is consonent" << endl;
//     }
// }

// int main(){
//     checkVowelConsonent();

//     return 0;
// }




// // Functions with no return type and with paramenters

// #include <iostream>
// using namespace std;

// void add(int a, double b){

//     double result = a + b;

//     cout << "Answer is " << result << endl;                              
// }

// int main(){
//     // Call function
//     add(20, 30.7);

//     return 0;
// }



// // Functions with return type and no paramenters

// #include <iostream>
// #include <string>
// using namespace std;


// int multiplyTwoNumber(){
//     int a, b;

//     cout << "Type two integer: ";
//     cin >> a >> b;

//     return a * b;
// }

// int main(){
//     int result = multiplyTwoNumber();

//     cout << "Result is " << result << endl;

//     return 0;
// }




// Functions with return type and with paramenters

#include <iostream>
#include <string>
using namespace std;

int divideTwoNumber(int x, int y){
    cout << "Type two integer: ";
    cin >> x >> y;

    if (y == 0){
        cout << "You can't divide by zero." << endl;
    } else

    return x / y;
}

int main(){

    int result = divideTwoNumber(2, 0);
    cout << "Result is " << result << endl;

    return 0;
}