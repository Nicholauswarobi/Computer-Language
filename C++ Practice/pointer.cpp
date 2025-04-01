// // Introduction to POINTER 

// #include <iostream>
// using namespace std;

// int main(){
//     int a = 10;
//     int *p;
//     p = &a;

//     cout << "The value of a " << a << endl;
//     cout << "The address of a " << &a << endl;
//     cout << "The value of p " << p << endl;
//     cout << "The address of p " << &p << endl;
//     cout << "The value of p " << *p << endl;
// }

// // ADDITIONAL OF TWO NUMBER

// #include <iostream>
// using namespace std;

// int main(){

//     int a, b = 20, c = 17;
//     int *p, *q, *r;

//     p = &a;
//     q = &b;
//     r = &c;

//     *p = *q + *r;
//     cout << "Addition is " << *p << endl;
// }


// // User input in pointer

// #include <iostream>
// using namespace std;

// int main(){
//     double a, b, c;
//     double *p, *q, *r;

//     p = &a;
//     q = &b;
//     r = &c;

//     cout << endl;
//     cout << "Type first number: ";
//     cin >> *q;

//     cout << "Type second number: ";
//     cin >> *r;

//     *p = *q + *r;

//     cout << "The additional of two number is " << *p << endl;

//     cout << endl;

//     return 0;
// }


// // Multiplication table

// #include <iostream>
// using namespace std;

// int main(){

//     int i = 1;
//     int *p;
//     p = &i;

//     while (*p <= 10){
//         cout << *p << endl;
//         (*p)++;
//     }
// }


// // POINTER TO ARRAY
// #include <iostream>
// using namespace std;

// int main(){
//     int arr[10] = {10, 57, 40, 30, 46, 67, 98, 19, 45, 17};
//     for (int i = 0; i <= 9; i++){
//         cout << *(arr + i) << endl;
//     }

//     return 0;
// }


// // POINTER TO FUNCTION

// #include <iostream>
// using namespace std;

// void area_of_rectangle(int *h, int *w){
//     int area = *h * *w;

//     cout << "The area of rectangle is " << area << endl;
// }

// int main(){
//     int x, y;
//     cout << endl;
//     cout << "Type the height of rectangle: ";
//     cin >> x;

//     cout << "Type the width of rectangle: ";
//     cin >> y;

//     area_of_rectangle(&x, &y);

//     return 0;
// }





// // VOID POINTER

// #include <iostream>
// using namespace std;

// // void pointer which can print all the type of variable via function
// void print_any_data_type(void* ptr, char type){
//     // we use switch so as to switch to different data type

//     switch(type){
//         case 'i':   // handle int type
//             cout << *((int*)ptr) << endl;
//             break;

//         case 'c':   // handling char type
//             cout << *((char*)ptr) << endl;
//             break;

//         case 'f':   // handling float type
//             cout << *((float*)ptr) << endl;
//             break;

//     }
// }

// int main(){
//     int number = 10;
//     char letter = 'N';
//     float num = 17.9;

//     print_any_data_type(&number, 'i');
//     print_any_data_type(&letter, 'c');
//     print_any_data_type(&num, 'f');

//     return 0;

// }




// // HOW TO USE POINTER AND ARRAYS

// #include <iostream>
// using namespace std;

// int main(){

//     int LuckyNumber[5];

//     for (int i = 0; i <= 4; i++){
//         cout << "Type any integer: ";
//         cin >> LuckyNumber[i];
//     }

//     cout << "The lucky number are" << endl;

//     for (int i = 0; i <= 4; i++){
//         // cout << "The lucky number are" << endl;
//         cout << *(LuckyNumber + i) << " ";
//     }

//     return 0;
// }






// //  RETURN MULTIPLE VALUES FROM A FUNCTION USING POINTER


// // For two different functions
// #include <iostream>
// using namespace std;

// // function to get minimum number
// int getMin(int numbers[], int size){
//     int min = numbers[0];
//     for (int i = 0; i < size; i++){
//         if (numbers[i] < min){
//             min = numbers[i];
//         }
//     }

//     return min;
// }

// // function to get minimum number
// int getMax(int numbers[], int size){
//     int max = numbers[0];
//     for (int i = 0; i < size; i++){
//         if (numbers[i] > max){
//             max = numbers[i];
//         }
//     }

//     return max;
// }


// int main(){
//     int numbers[6] = {45, 6, -20, -7, 6, 20};

//     cout << "The min is " << getMin(numbers, 6) << endl;
//     cout << "The max is " << getMax(numbers, 6) << endl;

//     return 0;

// }

// //  FOR only single function
// #include <iostream>
// using namespace std;


// void getMinAndMaxNumbers(int numbers[], int size, int* min, int* max){
//     for (int i = 0; i < size; i++){
//         if (numbers[i] < *min){
//             *min = numbers[i];
//         }

//         if (numbers[i] > *max){
//             *max = numbers[i];
//         }
//     }

// }

// int main(){
//     int numbers[6] = {45, 6, -20, -7, 6, 20};
    
//     int min = numbers[0];
//     int max = numbers[0];

//     getMinAndMaxNumbers(numbers, 6, &min, &max);

//     cout << "The min is "<< min << endl;
//     cout << "The max is "<< max << endl;


//     return 0;
// }





// //  DYNAMIC ARRAYS - HOW TO CREATE/CHANGE ARRAYS AT RUNTIME?

// #include <iostream>
// using namespace std;

// int main(){
//     // you can't create dynamic array without use memory management concept for allocate and deallocate array memory container for element
//     int size;
//     cout << "Size of array: ";
//     cin >> size;

//     int* myArray = new int[size];

//     for (int i = 0; i < size; i++){
//         cout << "Array [ " << i << " ]: ";
//         cin >> myArray[i];
//     }

//     cout << "The elements in the array are as below" << endl;
//     for (int i = 0; i < size; i++){

//         cout << myArray[i] << " ";
//     }

//      delete[]myArray;
//      myArray = NULL;
//     return 0;
// }






//  MULTIDIMENSIONAL DYNAMIC ARRAY (TWO DIMENSIONAL DYNAMIC ARRAY)

#include <iostream>
using namespace std;

int main(){

    // Get dimensions from the user
    int rows, cols;

    cout << "Enter row, col: ";
    cin >> rows >> cols;

        //  MEMORY ALLOCATION
    // Allocate array of row pointer
    int **myArray = new int*[rows];
    
    // Allocate each rows
    for (int i = 0; i < rows; i++){
        myArray[i] = new int[cols];
    }

    // Access element from array (Normal as 2D array)
    myArray[1][2] = 80;


        //   MEMORY DEALLOCATION
    // Delete each row first
    for (int i = 0; i < rows; i++){
        delete[] myArray[i];
    }

    // Then delete array of a pointers
    delete[] myArray;

    // Set pointer to null
    myArray = NULL;  

}
