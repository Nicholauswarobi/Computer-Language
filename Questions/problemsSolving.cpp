// // 1.	Write a program to find the greatest among three numbers input by the user
// // Solution

// #include <iostream>
// using namespace std;

// int main(){
//     int num1, num2, num3;

//     cout << endl;

//     cout << "Enter any three numbers: ";
//     cin >> num1 >> num2 >> num3;

//     if (num1 > num2 && num1 > num3){
//         cout << "The first number is greater than all, which is " << num1 << endl;
//     }

//     else if (num2 > num1 && num2 > num3){
//         cout << "The second number is greater than all, which is " << num2 << endl;
//     }

//     else if (num3 > num1 && num3 > num2){
//         cout << "The third number is greater than all, which is " << num3 << endl;
//     }

//     else{
//         cout << "Please enter the three different numbers." << endl;
//     }

//     cout << endl;

//     return 0;
// }




// // 2.	Write a program to find if the year entered is leap or not
// // Solution

// #include <iostream>
// using namespace std;

// int main(){
//     int year;

//     cout << endl;
//     cout << "Enter the year: ";
//     cin >> year;

//     // Leap year is the year which is divisible by 4 and not by 100, but also is divisible by 400.

//     if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
//         cout << "The year "<< year <<" is leap year."<<endl;
//     }

//     else{
//         cout << "The year "<< year << " is not leap year." <<endl;
//     }

//     return 0;
// }



// //  3.	By using switch statement write a program to display Monday to Sunday after an input from a user
// //  Solution

// #include <iostream>
// using namespace std;

// int main(){
//     int choice;

//     cout << endl;

//     cout << "Enter any number from 1 to 7: ";
//     cin >> choice;

//     switch(choice){
//         case 1:
//             cout << "It is monday.";
//             break;
        
//         case 2:
//             cout << "It is Tuesday.";
//             break;

//         case 3:
//             cout << "It is wednesday.";
//             break;
    
//         case 4:
//             cout << "It is thursday.";
//             break;       

//         case 5:
//             cout << "It is friday.";
//             break;
    
//         case 6:
//             cout << "It is saturday.";
//             break;

//         case 7:
//             cout << "It is sunday.";
//             break;

//         default:
//             cout << "Please enter the valid number range..";
//             break;
        
//     }

//     cout << endl;

//     return 0;
// }



// //  4.	Write a program to accept a score.  If this score is not equal to 75 then display “Fail”, otherwise display “Pass”. 
// // Solution

// #include <iostream>
// using namespace std;

// int main(){

//     int score;

//     cout << endl;

//     cout << "Enter the score: ";
//     cin >> score;

//     if (score <= 75){
//         cout << "You are Fail.." << endl;
//     }

//     else{
//         cout << "You are Pass.."<< endl;
//     }

//     cout << endl;

//     return 0;
// }




// //  5.	Write a program to accept a number.  Use the case statement to display “Tanzania” when number is 1, “Kenya” when number is 2, and “Uganda”, when number is 3.  Display “That is not correct” if number wasn’t any of the above. 

// // Solution

// #include <iostream>
// using namespace std;

// int main(){
//     int country_number;

//     cout << endl;

//     cout << "Enter the country number: ";
//     cin >> country_number;

//     switch(country_number){
//         case 1:
//             cout << "Tanzania";
//             break;

//         case 2:
//             cout << "Kenya";
//             break;

//         case 3:
//             cout << "Uganda";
//             break;

//         default:
//             cout << "That is not correct..";

//     }
//     cout << endl;
//     return 0;
// }




// //  6.	Write a program which prompt user to enter an integer number so as to print “Hello, I love C programming” only when the number is less than 10 and display the message “This is greater than 10” when it is otherwise {Use if-else statement}.

// //  Solution

// #include <iostream>
// using namespace std;

// int main(){
//     cout << endl;

//     int num;
//     cout << "Enter any number between 1 to 10: ";
//     cin >> num;

//     if (num <= 10){
//         cout <<"Hello, I love C++ programming";
//     }

//     else{
//         cout <<"This is greater than 10";
//     }

//     cout << endl;
//     return 0;
// }




// //  7.	Use switch statement to write a C program that prompts a user to select a month from January to December and display the selected month.

// //  solution

// #include <iostream>
// using namespace std;

// int main(){

//     cout << endl;

//     int month;
//     cout << "Enter month number: ";
//     cin >> month;

//     switch(month){
//         case 1:
//             cout << "January";
//             break;

//         case 2:
//             cout << "February";
//             break;

//         case 3:
//             cout << "March";
//             break;

//         case 4:
//             cout << "April";
//             break;

//         case 5:
//             cout << "May";
//             break;

//         case 6:
//             cout << "June";
//             break;

//         case 7:
//             cout << "July";
//             break;

//         case 8:
//             cout << "August";
//             break;

//         case 9:
//             cout << "September";
//             break;

//         case 10:
//             cout << "October";
//             break;

//         case 11:
//             cout << "November";
//             break;

//         case 12:
//             cout << "December";
//             break;

//         default:
//             cout << "Please enter the valid range number of month..";
//             break;
//     }

//     cout << endl;

//     return 0;
// }




// //  8.	Write a C program which allows the user to enter the score for the student and it displays the recommendations and grade for the score. Example: When a user enters 80, the programs should displays: Passed and grade is A.

// // Solution

// #include <iostream>
// using namespace std;

// int main(){
//     cout << endl;

//     int score;
    
//     cout << "Enter the score: ";
//     cin >> score;

//     if (score >= 75){
//         cout << "Passed and grade is A.";
//     }

//     else if (score < 75 && score >= 60){
//         cout << "Passed and grade is B.";
//     }

//     else if (score < 60 && score >= 50){
//         cout << "Passed and grade is C.";
//     }

//     else if (score < 50 && score >= 40){
//         cout << "Passed and grade is D.";
//     }

//     else{
//         cout << "Failed and grade is F.";
//     }

//     cout << endl;

//     return 0;

// }





// //  9.	Any integer is input through the keyboard. Write a program to find out whether it is an odd number or even number.

// //  Solution

// #include <iostream>
// using namespace std;

// int main(){

//     cout << endl;

//     int num;
//     cout << "Enter any integer: ";
//     cin >> num;

//     if (num % 2 == 0){
//         cout << "The integer is even number..";
//     }

//     else{
//         cout << "The integer is odd number..";
//     }

//     cout << endl;

//     return 0;
// }




//  12.	Write a program that will prompt a user to enter two integers and then by using switch statement a user can enter a number to see the result of the five arithmetic operations on those integers.

// Solution 

#include <iostream>
using namespace std;

int main(){
    cout << endl;

    int x, y, result, choice;
    cout << "Enter the two integer: ";
    cin >> x >> y;

    cout << "Arthimetic Operation..\n" << endl;
    cout << "1: Addition\n2: Substraction\n3: Multiplication\n4: Division\n5: Reminder\n"<< endl;
    cout << "Enter the operation: ";
    cin >> choice;


    switch(choice){
        case 1:
            result = x + y;
            cout << "The result is "<< result;
            break;

        case 2:
            result = x - y;
            cout << "The result is "<< result;
            break;

        case 3:
            result = x * y;
            cout << "The result is "<< result;
            break;

        case 4:
            result = x / y;
            cout << "The result is "<< result;
            break;

        case 5:
            result = x % y;
            cout << "The result is "<< result;
            break;

        default:
            cout << "Invalid number..";

    }

    cout << endl;

    return 0;
}
