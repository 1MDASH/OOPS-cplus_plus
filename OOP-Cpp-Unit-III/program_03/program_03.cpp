#include <cctype>                  // Used for checking characters
#include <iostream>                // Used for input and output
#include <string>                  // Used for string data
using namespace std;               // Allows us to use cout and string directly


// This class is used to validate different types of data
class Validator {

public:

    // Function to validate marks
    // This function accepts an integer value
    bool validate(int marks) const {

        // Marks should be between 0 and 100
        return marks >= 0 && marks <= 100;
    }


    // Function to validate amount
    // This function accepts a double value
    bool validate(double amount) const {

        // Amount should be greater than 0
        // Amount should not be more than 10,00,000
        return amount > 0.0 && amount <= 1000000.0;
    }


    // Function to validate a name
    // This function accepts a string value
    bool validate(const string& name) const {

        // Check whether the name is empty
        if (name.empty()) {
            return false;
        }


        // Check every character in the name
        for (char ch : name) {

            // Name should contain only alphabets and spaces
            if (!isalpha(static_cast<unsigned char>(ch)) && ch != ' ') {

                // Return false if any other character is found
                return false;
            }
        }


        // Name is valid
        return true;
    }
};


int main() {

    // Create an object of Validator class
    Validator validator;


    // boolalpha displays true and false
    // instead of 1 and 0
    cout << boolalpha;


    // Validate marks 88
    // Calls validate(int)
    cout << "Marks 88 valid: "
         << validator.validate(88) << endl;


    // Validate marks 120
    // Calls validate(int)
    cout << "Marks 120 valid: "
         << validator.validate(120) << endl;


    // Validate amount 4500.50
    // Calls validate(double)
    cout << "Amount 4500.50 valid: "
         << validator.validate(4500.50) << endl;


    // Validate name "Priya Sharma"
    // Calls validate(string)
    cout << "Name Priya Sharma valid: "
         << validator.validate(string("Priya Sharma")) << endl;


    // Validate name "Priya123"
    // Calls validate(string)
    cout << "Name Priya123 valid: "
         << validator.validate(string("Priya123")) << endl;


    // End the program
    return 0;
}