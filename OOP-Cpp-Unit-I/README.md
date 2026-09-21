# OOP-Cpp-Programs

Student Details

- Student Name: Darshan Santosh Nagane

- ZPRN: 126UAD2039

- Class/Division: SY-C

- Course Name: Object Oriented Programming with C++

- Programs: Soil Sensor Monitoring, Student Attendance Management, Product Catalog


List of Programs

1. Soil Sensor Monitoring System

2. Student Attendance Management System

3. Product Catalog Management System


1. Soil Sensor Monitoring System

Brief Description:

- This program is designed to store and manage soil sensor readings.

- It creates a class named SoilSensor to represent the information collected from a soil sensor.

- Each sensor contains a unique sensor ID, moisture level, and timestamp.

- The sensor ID is stored using a string variable.

- The moisture level is stored using a double data type because it can contain decimal values.

- The timestamp is stored as a string to represent the time of the sensor reading.

- Private data members are used to protect the sensor information.

- A constructor is used to initialize the sensor ID, moisture level, and timestamp.

- The readSensor() function is used to update the moisture level and reading time.

- The displayData() function is used to display the sensor information.

- A vector is used to store multiple SoilSensor objects.

- The emplace_back() function is used to add sensor objects directly into the vector.

- A for loop is used to access and display each sensor stored in the vector.

- The program updates the reading of the first sensor using the readSensor() function.

- The program demonstrates classes, objects, constructors, encapsulation, vectors, and member functions.

- The const keyword is used with displayData() because the function does not modify the sensor object.

- The final output displays the morning readings of all sensors and the updated reading of the first sensor.


2. Student Attendance Management System

Brief Description:

- This program is designed to manage and calculate student attendance.

- A class named Student is created to store and manage student attendance information.

- Each student contains a roll number, name, total attendance days, and present days.

- The roll number is stored using an integer variable.

- The student name is stored using a string variable.

- Private data members are used to protect the student information.

- A constructor is used to initialize the student's roll number and name.

- The totalDays and presentDays variables are initially set to zero.

- The markAttendance() function is used to record whether the student is present or absent.

- A bool value is used to represent the attendance status.

- If the student is present, the presentDays count is increased.

- The totalDays count is increased every time attendance is marked.

- The getAttendancePercentage() function is used to calculate the student's attendance percentage.

- If no attendance is recorded, the function returns 0.0%.

- The attendance percentage is calculated using the formula:
  Present Days / Total Days × 100

- The display() function is used to display the student's roll number, name, and attendance percentage.

- Two Student objects are created to represent two different students.

- The program demonstrates classes, objects, constructors, encapsulation, conditional statements, functions, and boolean values.

- Constant member functions are used where the function does not modify the student data.

- The final output displays the attendance report of both students.


3. Product Catalog Management System

Brief Description:

- This program is designed to manage product information in a product catalog.

- A class named Product is created to represent product details.

- Each product contains a product ID, product name, price, and stock quantity.

- The product ID is stored using an integer variable.

- The product name is stored using a string variable.

- The price is stored using a double data type.

- The stock quantity is stored using an integer variable.

- Private data members are used to protect the product information.

- A constructor is used to initialize the product details.

- A static variable named totalProducts is used to keep track of the total number of Product objects.

- The totalProducts value is increased whenever a new Product object is created.

- Inline functions are used to return the product ID, product name, and price.

- The updateStock() function is used to update the available stock quantity.

- The static getTotalProducts() function is used to return the total number of products.

- The display() function is used to display the product ID, name, price, and stock quantity.

- A destructor is used to decrease the totalProducts count when a Product object is destroyed.

- The static data member is initialized outside the class with an initial value of zero.

- Three Product objects are created for Laptop, Mouse, and Keyboard.

- The program demonstrates classes, objects, constructors, destructors, encapsulation, static data members, static member functions, and inline functions.

- The program also demonstrates how a static data member can be shared by all objects of a class.

- The final output displays the product catalog and the total number of products.