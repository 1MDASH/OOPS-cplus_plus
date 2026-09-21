#include <iostream>   // Used for displaying output on the screen
#include <string>     // Used for storing string values

using namespace std;


// Class used to store and manage student attendance
class Student
{
private:

    // Stores the student's roll number
    int rollNo;

    // Stores the student's name
    string name;

    // Stores the total number of days for which attendance was taken
    int totalDays;

    // Stores the number of days the student was present
    int presentDays;


public:

    // Constructor used to initialize student details
    Student(int r, string n)
        : rollNo(r), name(n), totalDays(0), presentDays(0)
    {
        // Initially, no attendance has been marked
    }


    // Function used to mark attendance for a student
    void markAttendance(bool isPresent)
    {
        // Increase the total number of attendance days
        totalDays++;

        // If the student is present, increase the present days
        if (isPresent)
        {
            presentDays++;
        }
    }


    // Function used to calculate attendance percentage
    double getAttendancePercentage() const
    {
        // If no attendance has been marked, return 0%
        if (totalDays == 0)
        {
            return 0.0;
        }

        // Calculate and return the attendance percentage
        return (presentDays * 100.0) / totalDays;
    }


    // Function used to display the student's attendance details
    void display() const
    {
        // Display roll number, name and attendance percentage
        cout << "Roll: " << rollNo
             << " | Name: " << name
             << " | Attendance: "
             << getAttendancePercentage() << "%" << endl;
    }
};


int main()
{
    // Create the first student object
    Student s1(101, "Rahul");

    // Create the second student object
    Student s2(102, "Priya");


    // Rahul was present on the first day
    s1.markAttendance(true);

    // Rahul was present on the second day
    s1.markAttendance(true);

    // Rahul was absent on the third day
    s1.markAttendance(false);


    // Priya was present on the first day
    s2.markAttendance(true);

    // Priya was present on the second day
    s2.markAttendance(true);

    // Priya was present on the third day
    s2.markAttendance(true);


    // Display the attendance report heading
    cout << "=== Attendance Report ===" << endl;


    // Display Rahul's attendance details
    s1.display();

    // Display Priya's attendance details
    s2.display();


    // End the program successfully
    return 0;
}