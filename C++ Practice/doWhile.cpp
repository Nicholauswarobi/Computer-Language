// #include <iostream>
// using namespace std;

// int main(){
//     int i = 1;

//     do{
//         cout << i << ", ";
//         i++;
//     } while (i <= 10);

//     return 0;
// }


// //   Sum of numbers from 1 to 10

// #include <iostream>
// using namespace std;

// int main(){
//     int i = 1, sum = 0;

//     do{
//         sum +=i;
//         i++;
//     } while(i <=10);

//     cout << "Sum is " << sum;

//     return 0;
// }



// //  Menu driven program

// #include <iostream>
// using namespace std;

// int main(){
//     int choice;

//     do{
//         cout <<"1. Option 1\n2. Option 2\n3. Exit\nEnter your choice: ";
//         cin >> choice;

//         switch(choice){
//             case 1:
//                 cout<<"You chose optiion 1" << endl;
//                 break;

//             case 2:
//                 cout<<"You chose optiion 2" << endl;
//                 break;

//             case 3:
//                 cout<<"Exiting program" << endl;
//                 break;
            
//                 default:
//                     cout << "Invalid choice...!" << endl;
//         }
//     } while (choice != 3);

//     return 0;
// }



// //   Password validation

// #include <iostream>
// using namespace std;

// int main(){
//     string password;
//     bool isValid = false;

//     do{
//         cout << "Enter your password: ";
//         cin >> password;

//         if (password == "nnw0881"){
//             isValid = true;
//             cout << "Access is granted...!" << endl;
//         }

//         else{
//             cout << "Incorrect password. Try again..!" << endl;
//         }
//     } while (!isValid);

//     return 0;
// }


// //  Factorial Calculation with Retry Option

// #include <iostream>
// using namespace std;

// int main(){
//     char choice;

//     do{
//         int num, factorial = 1;

//         cout << "Enter a number: ";
//         cin >> num;

//         for (int i = 1; i <=num; i++){
//             factorial *= i;
//         }

//         cout << "Factorial of " << num << " is " << factorial << endl;

//         cout << "Do you want to calculate another factorial number? (y/Y): ";
//         cin >> choice;
//     } while (choice == 'y' || choice == 'Y');

//     return 0;
// }



//  Simple calculation with Menu.

#include <iostream>
using namespace std;

int main(){
    char op;
    double num1, num2;
    bool exit = false;

    do{
        cout << "enter operaton (+, -, *, /) or (q/Q) for quit: ";
        cin >> op;

        if (op == 'q' || op == 'Q'){
            exit = true;
            cout << "Program quited." << endl;

        } else{
            cout << "Enter two number: ";
            cin >> num1 >> num2;

            switch(op){
                case '+':
                    cout << "Result is " << num1 + num2 << endl;
                    break;

                case '-':
                    cout << "Result is " << num1 - num2 << endl;
                    break;

                case '*':
                    cout << "Result is " << num1 * num2 << endl;
                    break;

                case '/':
                    cout << "Result is " << num1 / num2 << endl;
                    break;

                default:
                    cout << "Invalid inputs. Try again...!";
                    break;

            }

        }
    } while(!exit);
}