#include <iostream>              // iostream: library for input and output operations
#include <memory>               // memory: library for smart pointers like unique_ptr
#include <vector>                // vector: library for dynamic arrays
using namespace std;             // Allows us to use standard C++ names without std::




class Shape {                    // class: creates a class named Shape

public:                          // public: members can be accessed from outside the class

    virtual double area() const = 0;
    // virtual: enables runtime polymorphism
    // double: return type of the function
    // area(): function name
    // const: function does not modify the object
    // = 0: pure virtual function
    // Pure virtual function makes Shape an abstract class


    virtual void draw() const = 0;
    // virtual: enables runtime polymorphism
    // void: function does not return any value
    // draw(): function name
    // const: function does not modify the object
    // = 0: pure virtual function
    // Derived classes must implement this function


    virtual ~Shape() = default;
    // ~Shape(): destructor of Shape class
    // virtual: ensures proper destructor call for derived objects
    // = default: compiler creates the default destructor automatically
};



class Circle : public Shape {
    // class: creates a class named Circle
    // : public Shape: Circle publicly inherits from Shape


private:                         // private: accessible only inside Circle class

    double radius;                // Stores the radius of the circle


public:                          // public: accessible from outside the class

    explicit Circle(double r) : radius(r) {}
    // explicit: prevents unwanted implicit conversion
    // Circle: constructor name
    // double r: receives radius value
    // : radius(r): initializes radius using r
    // {}: empty constructor body


    double area() const override {
        // double: function returns a decimal value
        // area(): calculates area of circle
        // const: does not modify the Circle object
        // override: overrides Shape's area() function

        return 3.14159265359 * radius * radius;
        // return: sends calculated value back
        // 3.14159265359: value of PI
        // radius * radius: radius squared
        // Formula: PI * radius * radius
    }


    void draw() const override {
        // void: does not return any value
        // draw(): displays circle information
        // const: does not modify object
        // override: overrides Shape's draw() function

        cout << "Drawing circle with radius " << radius << endl;
        // cout: displays output
        // <<: insertion operator
        // "Drawing circle with radius": text to display
        // radius: displays radius value
        // endl: moves cursor to next line
    }
};



class Rectangle : public Shape {
    // class: creates Rectangle class
    // : public Shape: Rectangle inherits from Shape


private:                         // private: accessible only inside Rectangle

    double length;                // Stores length of rectangle
    double width;                 // Stores width of rectangle


public:                          // public: accessible from outside the class

    Rectangle(double l, double w) : length(l), width(w) {}
    // Rectangle: constructor
    // double l: receives length
    // double w: receives width
    // : length(l): initializes length
    // width(w): initializes width


    double area() const override {
        // double: returns decimal value
        // area(): calculates rectangle area
        // const: does not modify object
        // override: overrides Shape's area() function

        return length * width;
        // return: returns calculated area
        // length * width: formula for rectangle area
    }


    void draw() const override {
        // void: no return value
        // draw(): displays rectangle information
        // const: does not modify object
        // override: overrides Shape's draw() function

        cout << "Drawing rectangle "
             << length << " x " << width << endl;
        // cout: displays output
        // length: displays rectangle length
        // x: displays multiplication symbol
        // width: displays rectangle width
        // endl: moves to next line
    }
};



class Triangle : public Shape {
    // class: creates Triangle class
    // : public Shape: Triangle inherits from Shape


private:                         // private: accessible only inside Triangle

    double base;                  // Stores base of triangle
    double height;                // Stores height of triangle


public:                          // public: accessible from outside the class

    Triangle(double b, double h) : base(b), height(h) {}
    // Triangle: constructor
    // double b: receives base value
    // double h: receives height value
    // : base(b): initializes base
    // height(h): initializes height


    double area() const override {
        // double: returns decimal value
        // area(): calculates triangle area
        // const: does not modify object
        // override: overrides Shape's area() function

        return 0.5 * base * height;
        // return: returns calculated area
        // 0.5: represents one-half
        // base: base of triangle
        // height: height of triangle
        // Formula: 1/2 * base * height
    }


    void draw() const override {
        // void: no return value
        // draw(): displays triangle information
        // const: does not modify object
        // override: overrides Shape's draw() function

        cout << "Drawing triangle with base " << base
             << " and height " << height << endl;
        // cout: displays output
        // base: displays base value
        // height: displays height value
        // endl: moves to next line
    }
};



int main() {
    // int: main function returns an integer
    // main(): starting point of C++ program


    vector<unique_ptr<Shape>> shapes;
    // vector: stores multiple elements
    // unique_ptr: smart pointer that automatically manages memory
    // <Shape>: pointer can point to Shape and derived objects
    // shapes: name of the vector


    shapes.push_back(make_unique<Circle>(5.0));
    // make_unique<Circle>: creates a Circle object using smart pointer
    // 5.0: radius of Circle
    // push_back(): adds the object to vector
    // Circle with radius 5 is added to shapes


    shapes.push_back(make_unique<Rectangle>(4.0, 6.0));
    // make_unique<Rectangle>: creates Rectangle object
    // 4.0: length
    // 6.0: width
    // push_back(): adds Rectangle to vector


    shapes.push_back(make_unique<Triangle>(3.0, 8.0));
    // make_unique<Triangle>: creates Triangle object
    // 3.0: base
    // 8.0: height
    // push_back(): adds Triangle to vector


    cout << "=== CAD Shape System ===" << endl;
    // cout: displays output
    // "=== CAD Shape System ===": heading
    // endl: moves to next line


    for (const auto& shape : shapes) {
        // for: loop statement
        // const: object cannot be modified
        // auto: compiler automatically detects data type
        // &: reference, avoids copying
        // shape: current element of vector
        // : shapes: loops through all elements of shapes vector


        shape->draw();
        // shape: current smart pointer
        // ->: accesses function through pointer
        // draw(): calls the appropriate draw() function
        // Runtime polymorphism decides which draw() to execute


        cout << "Area: " << shape->area()
             << " square units" << endl;
        // cout: displays output
        // shape->area(): calls appropriate area() function
        // "Area: ": displays Area text
        // "square units": unit of area
        // endl: moves to next line
    }


    return 0;
    // return: sends value back to operating system
    // 0: indicates successful execution
}