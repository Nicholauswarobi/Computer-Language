// // Single dimension array

// #include <iostream>
// #include <string>
// using namespace std;

// int main(){
//     // Array declaration
//     int arr[5]{1, 3, 6 ,9, 12};

//     // Access value using index in array
//     cout << arr[0] << endl;
//     cout << arr[1] << endl;
//     cout << arr[2] << endl;
//     cout << arr[3] << endl;
//     cout << arr[4] << endl;
// }


// //  Double Dimension Array

// #include <iostream>
// #include <string>
// using namespace std;

// int main(){
//     // Array declaration of double dimension
//     int arr[2][2]{{12, 15}, {34, 56}};

//     // Access items in array
//     cout << "arr[0][0] " << arr[0][0] << endl;
//     cout << "arr[0][1] " << arr[0][1] << endl;
//     cout << "arr[1][0] " << arr[1][0] << endl;
//     cout << "arr[1][1] " << arr[1][1] << endl;
    
//     return 0;
// }



// //  Printing Array element usin loop

// #include <iostream>
// #include <string>
// using namespace std;

// int main(){
//     //  Array declaration
//     int arr[3][3]={{56,4,6}, {78, 9, 45}, {67, 90, 12}};

//     // Apply for loop to access element in array
//     for (int i = 0; i <=2; i++){
//         for (int j = 0; j <= 2; j++){
//             cout << arr[i][j] << " ";
//         }
//         cout << "\n";
//     }
    
//     return 0;
// }




// //  Printing Array element using loop to accept user input

// #include <iostream>
// #include <string>
// using namespace std;

// int main(){
//     // Array declaration
//     int arr[3][3];
//     int i, j;

//     cout << "Type 9 element one by one: ";
//     for (i = 0; i <= 2; i++)
//         for (j = 0; j <= 2; j++)
//             cin >> arr[i][j];

    
//     cout << "Element in Matrix form given below" << endl;

//     for (i = 0; i <= 2; i++){
//         for (j = 0; j <= 2; j++){
//             cout << arr[i][j] << " ";
//         }
//         cout << "\n";
//     }

//     return 0;
// }




//  Addition of two array

#include <iostream>
#include <string>
using namespace std;

int main(){

    int arr1[2][2] = {{23, 67}, {56, 90}};
    int arr2[2][2] = {{-78, -14}, {89, -90}};    
    int arr3[2][2];

    cout << "First array" << endl;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            cout << arr1[i][j] << " ";
        }

        cout << endl;
    }

    cout << "Second array."<< endl;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            cout << arr2[i][j] << " ";
        }

        cout << endl;
    }

    cout << "The sum of two arrays" << endl;

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){

            arr3[i][j] =  arr1[i][j] + arr2[i][j];
            cout << arr3[i][j] << " ";
        }

        cout << endl;
    }
    
    return 0;
}
