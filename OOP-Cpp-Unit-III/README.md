# OOP-Cpp-Unit-III

Student Details

- Student Name: Darshan Santosh Nagane

- ZPRN: 126UAD2039
- Class/Division: SY-C

- Course Name: Object Oriented Programming with C++

- Unit III: Polymorphism

List of Programs

1. CAD Shape Drawing System
2. Complex Number Calculator
3. Input Validation Service

1. CAD Shape Drawing System

Brief Description:

- This program is designed to handle different geometric shapes in a simple CAD-like system.
- It creates three different shapes: Circle, Rectangle, and Triangle.
- Each shape contains its own dimensions, such as radius, length, width, base, and height.
- A common abstract base class called Shape is used to provide a common interface for all shapes.
- The Shape class contains two pure virtual functions: area() and draw().
- Each derived class implements these functions according to its own requirements.
- The Circle class calculates the area using the radius.
- The Rectangle class calculates the area using length and width.
- The Triangle class calculates the area using base and height.
- The draw() function displays the details of each shape.
- The program uses runtime polymorphism to call the correct area() and draw() functions for each shape.
- Base-class pointers are used to work with different derived-class objects through the common Shape interface.
- A vector is used to store multiple shape objects together.
- Smart pointers (unique_ptr) are used for automatic memory management.
- A virtual destructor is used in the base class for safe destruction of derived objects.
- This program demonstrates abstraction, inheritance, function overriding, and runtime polymorphism.
- The final output displays each shape, its dimensions, and its calculated area.


2. Complex Number Calculator

Brief Description:

- This program is used to perform basic mathematical operations on complex numbers.
- A complex number consists of two parts: a real part and an imaginary part.
- The program creates a class named Complex to represent complex numbers.
- The class stores the real and imaginary parts as private data members.
- A constructor is used to initialize the real and imaginary values of the complex number.
- The program creates two complex number objects, C1 and C2.
- It performs addition of two complex numbers using the + operator.
- It performs subtraction of two complex numbers using the - operator.
- It performs multiplication of two complex numbers using the * operator.
- It compares two complex numbers using the == operator.
- Operator overloading is used to give special meaning to operators for Complex objects.
- The overloaded +, -, *, and == operators make the operations simple and easy to understand.
- The program demonstrates binary operator overloading because two operands are involved in operations like +, -, and *.
- The display() function is used to show the complex number in the form of a + bi.
- Constant member functions are used where the function does not modify the object data.
- Private data members provide data protection through encapsulation.
- The program demonstrates compile-time polymorphism through operator overloading.
- The final output displays the two complex numbers and the results of addition, subtraction, and multiplication.
- This program shows how C++ operators can be overloaded to work with user-defined objects.


3. Input Validation Service

Brief Description:

- This program is used to validate different types of input data.
- A class named Validator is created to perform the validation operations.
- The program validates three different types of data: marks, amount, and name.
- Function overloading is used to create multiple validate() functions with different parameter types.
- The validate(int marks) function checks whether the marks are between 0 and 100.
- The validate(double amount) function checks whether the amount is greater than 0 and within the allowed limit of 1,000,000.
- The validate(const string& name) function checks whether the name is not empty.
- The name validation function also checks that the name contains only alphabets and spaces.
- The program uses string processing to examine each character of the entered name.
- The isalpha() function is used to check whether a character is an alphabet.
- Different validate() functions are automatically selected based on the type of input provided.
- This demonstrates function overloading in C++.
- Function overloading is a form of compile-time polymorphism.
- The program uses boolalpha to display validation results in the form of true or false.
- Different test values are given to check valid and invalid inputs.
- For example, marks 88 are valid, while marks 120 are invalid.
- Similarly, a valid amount and a valid name are accepted, while an invalid name containing numbers is rejected.
- The program demonstrates function overloading, compile-time polymorphism, string processing, and input validation.
- The final output clearly shows whether each given input is valid or invalid.