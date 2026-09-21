#include <iostream>   // Used for input and output like cout
#include <string>     // Used to work with string values
#include <vector>     // Used to store multiple SoilSensor objects

using namespace std;  // So we don't need to write std:: every time


// Class for storing and managing soil sensor information
class SoilSensor
{
private:

    // Stores the unique ID of the sensor
    string sensorId;

    // Stores the moisture level of the soil
    double moistureLevel;

    // Stores the time when the reading was taken
    string timestamp;


public:

    // Constructor used to initialize the sensor details
    SoilSensor(string id, double moisture, string time)
        : sensorId(id), moistureLevel(moisture), timestamp(time)
    {
        // The given values are assigned to the class variables
    }


    // Function used to update the sensor reading
    void readSensor(double newMoisture, string newTime)
    {
        // Update the moisture value with the new reading
        moistureLevel = newMoisture;

        // Update the time of the new reading
        timestamp = newTime;
    }


    // Function used to display the sensor information
    void displayData() const
    {
        // Display sensor ID, moisture level and reading time
        cout << "Sensor: " << sensorId
             << " | Moisture: " << moistureLevel << "%"
             << " | Time: " << timestamp << endl;
    }
};


int main()
{
    // Create a vector to store multiple soil sensor objects
    vector<SoilSensor> farmSensors;


    // Add the first sensor with its initial reading
    farmSensors.emplace_back("S001", 45.2, "08:00");

    // Add the second sensor with its initial reading
    farmSensors.emplace_back("S002", 52.8, "08:00");

    // Add the third sensor with its initial reading
    farmSensors.emplace_back("S003", 38.5, "08:00");


    // Display the heading for morning readings
    cout << "=== Morning Sensor Readings ===" << endl;


    // Go through each sensor stored in the vector
    for (const auto& sensor : farmSensors)
    {
        // Display the details of the current sensor
        sensor.displayData();
    }


    // Update the reading of the first sensor
    // Moisture is changed from 45.2% to 47.5%
    // Time is changed from 08:00 to 09:00
    farmSensors[0].readSensor(47.5, "09:00");


    // Display the heading for the updated reading
    cout << "\n=== Updated Reading ===" << endl;


    // Display the updated information of the first sensor
    farmSensors[0].displayData();


    // End the program successfully
    return 0;
}