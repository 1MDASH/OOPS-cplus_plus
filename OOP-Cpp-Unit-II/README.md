# OOP-Cpp-Unit-II

Student Details

- Student Name: Darshan Santosh Nagane

- ZPRN: 126UAD2039

- Class/Division: SY-C

- Course Name: Object Oriented Programming with C++

- Unit I: Introduction to Object Oriented Programming

List of Programs

1. Employee Payroll System

2. Payment Gateway System

3. Vehicle Fleet Management System


1. Employee Payroll System

Brief Description:

- This program is designed to manage different types of employees and calculate their salaries.

- A base class named Employee is created to store common employee information.

- The Employee class stores employee ID, name, and department.

- The employee ID is stored using an integer data member.

- The name and department are stored using string data members.

- The data members are declared as protected so that derived classes can access them.

- A constructor is used to initialize the employee ID, name, and department.

- The displayBasicInfo() function is used to display the common employee information.

- A pure virtual function named calculateSalary() is declared in the Employee class.

- The FullTimeEmployee class is derived from the Employee class and stores the monthly salary.

- The PartTimeEmployee class is derived from the Employee class and stores the hourly rate and hours worked.

- The Intern class is derived from the Employee class and stores the stipend amount.

- Each derived class overrides the calculateSalary() function according to its own salary calculation.

- The FullTimeEmployee class returns the fixed monthly salary.

- The PartTimeEmployee class calculates salary using hourly rate multiplied by hours worked.

- The Intern class returns the given stipend amount.

- The display() function is used to display the employee details along with salary information.

- The virtual destructor is used in the base class for safe destruction of derived objects.

- The program demonstrates inheritance, abstraction, pure virtual functions, function overriding, and runtime polymorphism.

- The same calculateSalary() function behaves differently for different types of employees.

- The final output displays the employee ID, name, department, employee type, and salary.


2. Payment Gateway System

Brief Description:

- This program is designed to simulate a simple payment gateway system.

- A base class named PaymentMethod is created to provide a common interface for different payment methods.

- The PaymentMethod class stores transaction ID and payment amount.

- The transaction ID is stored using a string data member.

- The payment amount is stored using a double data member.

- A constructor is used to initialize the transaction ID and payment amount.

- A pure virtual function named processPayment() is declared in the PaymentMethod class.

- The CreditCardPayment class is derived from PaymentMethod and stores a masked credit card number.

- The UPIPayment class is derived from PaymentMethod and stores a UPI ID.

- The NetBankingPayment class is derived from PaymentMethod and stores the bank name.

- Each derived class overrides the processPayment() function according to its payment method.

- The CreditCardPayment class displays the credit card transaction details.

- The UPIPayment class displays the UPI transaction details.

- The NetBankingPayment class displays the net-banking transaction details.

- The processPayment() function returns true after successfully processing the payment.

- A vector is used to store multiple payment objects together.

- Smart pointers using unique_ptr are used for automatic memory management.

- make_unique() is used to create the payment objects dynamically.

- Base-class pointers are used to access different derived-class objects through the common PaymentMethod interface.

- The program demonstrates abstraction, inheritance, function overriding, runtime polymorphism, vectors, and smart pointers.

- The final output displays the details of credit card, UPI, and net-banking transactions.


3. Vehicle Fleet Management System

Brief Description:

- This program is designed to manage different types of vehicles in a fleet.

- A base class named Vehicle is created to store common vehicle information.

- The Vehicle class stores vehicle ID, registration number, and fuel level.

- The vehicle ID and registration number are stored using string data members.

- The fuel level is stored using a double data member.

- A constructor is used to initialize the vehicle ID and registration number.

- The fuel level is initially set to 100%.

- The startEngine() function is used to display the engine starting message.

- The refuel() function is used to increase the fuel level of the vehicle.

- The fuel level is restricted to a maximum of 100%.

- A virtual function named displayInfo() is used to display vehicle information.

- The Truck class is derived from the Vehicle class and stores the cargo capacity.

- The DeliveryVan class is derived from the Vehicle class and stores the number of packages loaded.

- The Bike class is derived from the Vehicle class and stores whether a delivery box is available.

- Each derived class overrides the displayInfo() function according to its vehicle type.

- The Truck class displays the cargo capacity along with the common vehicle details.

- The DeliveryVan class displays the number of loaded packages along with the common vehicle details.

- The Bike class displays whether the delivery box is available or not.

- A vector is used to store different vehicle objects together.

- Smart pointers using unique_ptr are used for automatic memory management.

- Base-class pointers are used to access different derived-class objects through the common Vehicle interface.

- The program demonstrates inheritance, virtual functions, function overriding, runtime polymorphism, vectors, and smart pointers.

- The ternary operator is used to display whether the delivery box is available or not.

- A virtual destructor is used in the base class for safe destruction of derived objects.

- The final output displays the engine status and details of the truck, delivery van, and delivery bike.