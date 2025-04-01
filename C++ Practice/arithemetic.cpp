// #include <iostream>

// using namespace std;


//     /*(Arithmetic, Smallest and Largest) Write a program that inputs three integers from the keyboard and prints the sum, average, product, smallest and largest of these numbers. The screen dialog
//     should appear as follows:*/


// SOLUTION BELOW

// int main(){

//     // Variable declarations
//     int a, b, c;
//     int sum, average, product, smallest, largest;
    
//     cout << endl << "Enter three different integers: ";
//     cin >>a >>b >> c;

//     // The sum
//     sum = a + b + c;
//     cout << "The sum of three integers is "<< sum << endl;

//     // The average
//     average = (a + b + c)/3;
//     cout << "The average of three integers is "<< average << endl;
//     // The product 
//     product = a*b*c;
//     cout << "The product of three integers is "<< product << endl;


//     // Smallest value

//     if (a < b && a < c){
//         cout << "The smallest value is "<< a << endl;
//     }

//     if (b < a && b < c){
//         cout << "The Smallest value is "<< b << endl;
//     }

//     if (c < a && c < b){
//         cout << "The smallest value is "<< c << endl;
//     }


//     // Largest value

//     if (a > b && a > c){
//         cout << "The Largest value is "<< a << endl;
//     }

//     if (b > a && b > c){
//         cout << "The Largest value is "<< b << endl;
//     }

//     if (c > a && c > b){
//         cout << "The Largest value is "<< c << endl;
//     }
     
//     cout << endl;
//     return 0;

// }


//     /*
//     Using the techniques of this chapter, write a program that calculates the surface area
//     and volume of cubes with face lengths of 0 to 4 cm. Use tabs to print the following neatly formatted
//     table of values
//     */

//     //  SOLUTION BELOW 

// #include <iostream>

// using namespace std;

// int main(){
//     int lengths, area, volume;
    
//     cout << endl;
//     cout << "Face length\n of cube (cm)";
//     cout << "\t Surface area\n\t\t of cube(cm^2)";
//     cout << "\t volume\n\t\t\t\t of cube(cm^3)"<< endl;
  


//     for (lengths = 0; lengths < 5; lengths++){
//         cout << lengths;

//         area = 6 * lengths * lengths;
//         cout<< "\t\t"<< area;

//         volume = lengths*lengths*lengths;
//         cout<< "\t\t" << volume<<endl;
//     }
//     cout << endl;
//     return 0;

// }



// /*
// BMI = weightInKilograms/ (heightInMeters * heightInMeters)

// Create a BMI calculator application that reads the user’s weight in pounds and height in inches (or, if you prefer, the user’s weight in kilograms and height in meters), then calculates and displays the user’s body mass index. Also, the application should display the following information from the Department of Health and Human Services/National Institutes of Health so the user can evaluate his/her BMI

//     BMI VALUES
//     Underweight: less than 18.5
//     Normal: between 18.5 and 24.9
//     Overweight: between 25 and 29.9

// */

// // SOLUTION BELOW

// #include <iostream>

// using namespace std;

// int main(){

//     // Variable declarations
//     double BMI, weightInKilograms, heightInMeters;

//     cout << endl<< "Please enter your weight in kilogram unit: ";
//     cin >> weightInKilograms;

//     cout << endl << "Please enter your height in meters unit: ";
//     cin >> heightInMeters;
    
//     BMI = weightInKilograms / (heightInMeters * heightInMeters);

//     cout << "Your BMI value is "<< BMI << endl;

//     cout << endl;

//     if (BMI < 18.5){
//         cout << "You are underweight: less than 18.5"<< endl;
//     }

//     if (BMI >= 18.5 && BMI <= 24.9){
//         cout << "You are in Normal condition because BMI value is between 18.5 and 24.9"<< endl;
//     }

//     if (BMI >= 25 && BMI <= 29.9){
//         cout << "You are in overweight condition because BMI value is between 25 and 29.9"<< endl;
//     }

//     if (BMI >= 30){
//         cout << "You are in Obesity state bacause BMI value is greater 30 unit"<< endl;
//     }

//     cout << endl;

//     return 0;

// }



/*

    Car-Pool Savings Calculator) Research several car-pooling websites. Create an application that calculates your daily driving cost, so that you can estimate how much money could be saved by car pooling, which also has other advantages such as reducing carbon emissions and reducing traffic congestion. The application should input the following information and display the user’s cost per day of driving to work: 
        a) Total miles driven per day. 
        b) Cost per gallon of gasoline. 
        c) Average miles per gallon.
        d) Parking fees per day. 
        e) Tolls per day.

*/

// SOLUTION BELOW

#include <iostream>

using namespace std;

int main(){
    double miles, gallon, cost, average, ParkingFee, Tolls, Total_cost;

    cout << endl;
    cout << "Enter the miles driven: ";
    cin >> miles;

    cout << "Enter amount of gallon of gasline: ";
    cin >> gallon;

    cout << "Enter cost per each gallon of gasline: ";
    cin >> cost;

    // Average miles per gallon
    average = miles/gallon;

    // Cost per gallon of gasoline
    Total_cost = cost * gallon;

    cout << "Parking fee per day: ";
    cin >> ParkingFee;

    Tolls = Total_cost + ParkingFee;

    cout << endl;

    cout << "Total miles driven is: "<< miles << endl;
    cout << "The total cost of gasline used: "<< Total_cost << endl;
    cout << "The average miles per gallon: "<< average << endl;
    cout << "The parking fees is: "<< ParkingFee<< endl;
    cout << "The tolls per day: "<< Tolls << endl;

    cout << endl;
    return 0;

}


