#include <iostream>

using namespace std;

//Function prototype
int userInteger();

//Start of main
int main() {

    //Declares the variables
    int totalSum = 0;
    int userInput;

    //tells the user to input a negative number to stop
    cout << "Enter a negative number to finish" << endl;


    // Loop until a negative number is entered
    do {
        userInput = PromptForInteger();

        //Adds only positive numbers to the total
        if (userInput >= 0) {
            totalSum += userInput;
        }//end of if
    }//End of do while 
    while (userInput >= 0);

    //Display the total sum after all numbers are added
    cout << "Total Sum: " << totalSum << endl;
    return 0;
}//End of main

//start of PromptForInteger
int PromptForInteger() {
    int userValue;
    cout << "Please enter an integer: ";
    cin >> userValue;
    return userValue;
}//End of PromptForInteger
