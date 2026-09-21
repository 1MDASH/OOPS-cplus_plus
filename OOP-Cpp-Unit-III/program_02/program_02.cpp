#include <iostream>              // Header file used for input and output
using namespace std;             // Allows us to use cout without writing std::


// This class is used to represent a complex number
class Complex {

private:

    double real;                 // Stores the real part of the number
    double imag;                 // Stores the imaginary part of the number


public:

    // Constructor used to initialize real and imaginary values
    Complex(double r = 0.0, double i = 0.0)
        : real(r), imag(i) {}

    // r = real value
    // i = imaginary value
    // If no value is given, both values become 0


    // Overloading + operator
    // Used to add two complex numbers
    Complex operator+(const Complex& other) const {

        // Add the real parts
        // Add the imaginary parts
        // Return the result as a new Complex object
        return Complex(real + other.real,
                       imag + other.imag);
    }


    // Overloading - operator
    // Used to subtract two complex numbers
    Complex operator-(const Complex& other) const {

        // Subtract the real parts
        // Subtract the imaginary parts
        // Return the result
        return Complex(real - other.real,
                       imag - other.imag);
    }


    // Overloading * operator
    // Used to multiply two complex numbers
    Complex operator*(const Complex& other) const {

        // Formula:
        // (a + bi)(c + di)
        // = (ac - bd) + (ad + bc)i

        return Complex(
            real * other.real - imag * other.imag,
            real * other.imag + imag * other.real
        );
    }


    // Overloading == operator
    // Used to compare two complex numbers
    bool operator==(const Complex& other) const {

        // Check whether both real parts are equal
        // and both imaginary parts are equal
        return real == other.real &&
               imag == other.imag;
    }


    // Function used to display a complex number
    void display() const {

        // Print real part
        // Print + sign
        // Print imaginary part followed by i
        cout << real << " + " << imag << "i" << endl;
    }
};


// Main function
// Program execution starts from here
int main() {

    // Create first complex number
    // real = 3.0
    // imaginary = 4.0
    Complex c1(3.0, 4.0);


    // Create second complex number
    // real = 1.0
    // imaginary = 2.0
    Complex c2(1.0, 2.0);


    // Display first complex number
    cout << "C1: ";
    c1.display();


    // Display second complex number
    cout << "C2: ";
    c2.display();


    // Add c1 and c2
    // Calls operator+ function
    cout << "Sum: ";
    (c1 + c2).display();


    // Subtract c2 from c1
    // Calls operator- function
    cout << "Difference: ";
    (c1 - c2).display();


    // Multiply c1 and c2
    // Calls operator* function
    cout << "Product: ";
    (c1 * c2).display();


    // End of program
    return 0;
}