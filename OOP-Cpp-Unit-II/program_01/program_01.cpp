#include <iostream>   // Used for displaying output
#include <string>     // Used for storing employee names and departments

using namespace std;


// Base class for storing common employee information
class Employee
{
protected:

    // Stores the employee ID
    int empId;

    // Stores the employee name
    string name;

    // Stores the employee department
    string department;


public:

    // Constructor used to initialize basic employee details
    Employee(int id, string n, string dept)
        : empId(id), name(n), department(dept)
    {
        // Basic employee information is initialized here
    }


    // Function used to display common employee information
    void displayBasicInfo() const
    {
        cout << "ID: " << empId
             << " | Name: " << name
             << " | Department: " << department;
    }


    // Pure virtual function for calculating salary
    // Each derived class will calculate salary differently
    virtual double calculateSalary() const = 0;


    // Virtual destructor for safe destruction of derived objects
    virtual ~Employee() = default;
};


// Class for full-time employees
// It inherits the common properties from Employee
class FullTimeEmployee : public Employee
{
private:

    // Stores the fixed monthly salary
    double monthlySalary;


public:

    // Constructor used to initialize full-time employee details
    FullTimeEmployee(int id, string n, string dept, double salary)
        : Employee(id, n, dept), monthlySalary(salary)
    {
        // Full-time employee information is initialized here
    }


    // Overrides the salary calculation function
    double calculateSalary() const override
    {
        // Full-time employee gets the fixed monthly salary
        return monthlySalary;
    }


    // Function used to display full-time employee details
    void display() const
    {
        // Display common employee information
        displayBasicInfo();

        // Display employee type and salary
        cout << " | Type: Full-Time | Salary: Rs. "
             << calculateSalary() << endl;
    }
};


// Class for part-time employees
// It also inherits from the Employee class
class PartTimeEmployee : public Employee
{
private:

    // Stores the payment received per hour
    double hourlyRate;

    // Stores the total number of hours worked
    int hoursWorked;


public:

    // Constructor used to initialize part-time employee details
    PartTimeEmployee(int id, string n, string dept,
                     double rate, int hours)
        : Employee(id, n, dept),
          hourlyRate(rate),
          hoursWorked(hours)
    {
        // Part-time employee information is initialized here
    }


    // Overrides the salary calculation function
    double calculateSalary() const override
    {
        // Salary is calculated using hourly rate and hours worked
        return hourlyRate * hoursWorked;
    }


    // Function used to display part-time employee details
    void display() const
    {
        // Display common employee information
        displayBasicInfo();

        // Display employee type and calculated salary
        cout << " | Type: Part-Time | Salary: Rs. "
             << calculateSalary() << endl;
    }
};


// Class for interns
// It inherits the common properties from Employee
class Intern : public Employee
{
private:

    // Stores the stipend given to the intern
    double stipend;


public:

    // Constructor used to initialize intern details
    Intern(int id, string n, string dept, double stipendAmount)
        : Employee(id, n, dept),
          stipend(stipendAmount)
    {
        // Intern information is initialized here
    }


    // Overrides the salary calculation function
    double calculateSalary() const override
    {
        // For an intern, the salary is the given stipend
        return stipend;
    }


    // Function used to display intern details
    void display() const
    {
        // Display common employee information
        displayBasicInfo();

        // Display employee type and stipend
        cout << " | Type: Intern | Stipend: Rs. "
             << calculateSalary() << endl;
    }
};


int main()
{
    // Create a full-time employee object
    FullTimeEmployee f1(101, "Amit", "IT", 65000);

    // Create a part-time employee object
    PartTimeEmployee p1(102, "Sneha", "HR", 250, 120);

    // Create an intern object
    Intern i1(103, "Rohan", "Marketing", 15000);


    // Display the payroll report heading
    cout << "=== Employee Payroll ===" << endl;


    // Display full-time employee details
    f1.display();

    // Display part-time employee details
    p1.display();

    // Display intern details
    i1.display();


    // End the program successfully
    return 0;
}