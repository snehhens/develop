//find out input number is odd or even

#include <iostream> // Include the input-output stream library
//using namespace std; // Use the std namespace if you are not using this then use std::cout,etc

int main() {
    using namespace std; // Use the std namespace if you are not using this then use std::cout,etc

    // Declare a variable to store the user input
    int number;

    // Ask the user to enter a number
    cout<<"Hey there! I'm Guy Sneh.\n";
    cout<<"Please enter a number: ";
    cin>>number;

    // Check if the number is even or odd
    if (number%2==0) {
        cout << "The number you entered is even." << endl;
    } else {
        cout << "The number you entered is odd." << endl;
    }
    
    // Return 0 to indicate successful program execution
    return 0;
}

//find input is odd or even using User-Define Function

/*#include <iostream>
using namespace std;

//function declaration
// UDF to check if a number is odd or even
void checkOddEven(int number) {
    if (number % 2 == 0) {
        cout << number << " is even." << endl;
    } else {
        cout << number << " is odd." << endl;
    }
}

int main() {
    int num;

    // Ask the user to enter a number
    cout << "Hey there! I'm Guy Sneh.\n";
    cout << "Please enter a number: ";
    cin >> num;

    //function calling
    // Call the UDF to check if the number is odd or even
    checkOddEven(num);

    return 0;
}*/
