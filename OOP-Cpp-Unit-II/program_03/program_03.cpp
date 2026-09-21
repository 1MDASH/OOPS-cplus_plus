#include <iostream>   // Used for displaying output
#include <memory>     // Used for smart pointers like unique_ptr
#include <string>     // Used for storing vehicle details
#include <vector>     // Used for storing multiple vehicle objects

using namespace std;


// Base class for storing common vehicle information
class Vehicle
{
protected:

    // Stores the unique ID of the vehicle
    string vehicleId;

    // Stores the registration number of the vehicle
    string registrationNumber;

    // Stores the current fuel level
    double fuelLevel;


public:

    // Constructor used to initialize vehicle details
    Vehicle(string vid, string reg)
        : vehicleId(vid),
          registrationNumber(reg),
          fuelLevel(100.0)
    {
        // Fuel level is initially set to 100%
    }


    // Function used to start the vehicle engine
    void startEngine() const
    {
        cout << "Vehicle " << vehicleId
             << " engine started." << endl;
    }


    // Function used to increase the fuel level
    void refuel(double amount)
    {
        // Add the given amount of fuel
        fuelLevel += amount;

        // Fuel level should not go above 100%
        if (fuelLevel > 100.0)
        {
            fuelLevel = 100.0;
        }
    }


    // Virtual function used to display vehicle information
    virtual void displayInfo() const
    {
        cout << "Vehicle ID: " << vehicleId
             << " | Registration: " << registrationNumber
             << " | Fuel: " << fuelLevel << "%" << endl;
    }


    // Virtual destructor for safe destruction of derived objects
    virtual ~Vehicle() = default;
};


// Truck class inherits from Vehicle
class Truck : public Vehicle
{
private:

    // Stores the maximum cargo capacity of the truck
    double cargoCapacity;


public:

    // Constructor used to initialize truck details
    Truck(string vid, string reg, double capacity)
        : Vehicle(vid, reg),
          cargoCapacity(capacity)
    {
        // Truck information is initialized here
    }


    // Overrides the displayInfo() function
    void displayInfo() const override
    {
        // Display the type of vehicle
        cout << "Truck | ";

        // Display common vehicle information
        Vehicle::displayInfo();

        // Display the truck's cargo capacity
        cout << "Cargo capacity: "
             << cargoCapacity << " tonnes" << endl;
    }
};


// DeliveryVan class inherits from Vehicle
class DeliveryVan : public Vehicle
{
private:

    // Stores the number of packages loaded in the van
    int packageCount;


public:

    // Constructor used to initialize delivery van details
    DeliveryVan(string vid, string reg, int packages)
        : Vehicle(vid, reg),
          packageCount(packages)
    {
        // Delivery van information is initialized here
    }


    // Overrides the displayInfo() function
    void displayInfo() const override
    {
        // Display the type of vehicle
        cout << "Delivery Van | ";

        // Display common vehicle information
        Vehicle::displayInfo();

        // Display the number of loaded packages
        cout << "Packages loaded: "
             << packageCount << endl;
    }
};


// Bike class inherits from Vehicle
class Bike : public Vehicle
{
private:

    // Stores whether the bike has a delivery box or not
    bool hasDeliveryBox;


public:

    // Constructor used to initialize bike details
    Bike(string vid, string reg, bool hasBox)
        : Vehicle(vid, reg),
          hasDeliveryBox(hasBox)
    {
        // Bike information is initialized here
    }


    // Overrides the displayInfo() function
    void displayInfo() const override
    {
        // Display the type of vehicle
        cout << "Delivery Bike | ";

        // Display common vehicle information
        Vehicle::displayInfo();

        // Display whether the delivery box is available
        cout << "Delivery box: "
             << (hasDeliveryBox ? "Available" : "Not available")
             << endl;
    }
};


int main()
{
    // Create a vector to store different types of vehicles
    vector<unique_ptr<Vehicle>> fleet;


    // Add a truck to the fleet
    fleet.push_back(
        make_unique<Truck>(
            "V001", "MH12-AB-1234", 10.5
        )
    );


    // Add a delivery van to the fleet
    fleet.push_back(
        make_unique<DeliveryVan>(
            "V002", "MH12-CD-5678", 50
        )
    );


    // Add a delivery bike to the fleet
    fleet.push_back(
        make_unique<Bike>(
            "V003", "MH12-EF-9012", true
        )
    );


    // Display the fleet status heading
    cout << "=== Fleet Status ===" << endl;


    // Go through each vehicle in the fleet
    for (const auto& vehicle : fleet)
    {
        // Start the engine of the current vehicle
        vehicle->startEngine();

        // Display information of the current vehicle
        // The correct overridden function is called automatically
        vehicle->displayInfo();

        // Print an empty line for better readability
        cout << endl;
    }


    // End the program successfully
    return 0;
}