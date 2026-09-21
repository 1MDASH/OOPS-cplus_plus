#include <iostream>   // Used for displaying output
#include <string>     // Used for storing product names

using namespace std;


// Class used to store product information
class Product
{
private:

    // Stores the unique ID of the product
    int productId;

    // Stores the name of the product
    string productName;

    // Stores the price of the product
    double price;

    // Stores the available stock quantity
    int stockQuantity;

    // Static variable used to keep count of all Product objects
    static int totalProducts;


public:

    // Constructor used to initialize product details
    Product(int id, string name, double p, int stock)
        : productId(id), productName(name), price(p), stockQuantity(stock)
    {
        // Increase the total product count whenever a new object is created
        totalProducts++;
    }


    // Inline function used to return the product ID
    inline int getId() const
    {
        return productId;
    }


    // Inline function used to return the product name
    inline string getName() const
    {
        return productName;
    }


    // Inline function used to return the product price
    inline double getPrice() const
    {
        return price;
    }


    // Function used to update the available stock
    void updateStock(int quantity)
    {
        // Replace the old stock quantity with the new quantity
        stockQuantity = quantity;
    }


    // Static function used to get the total number of products
    static int getTotalProducts()
    {
        return totalProducts;
    }


    // Function used to display product details
    void display() const
    {
        // Display ID, product name, price and stock
        cout << "ID: " << productId
             << " | Product: " << productName
             << " | Price: Rs. " << price
             << " | Stock: " << stockQuantity << endl;
    }


    // Destructor is called when a Product object is destroyed
    ~Product()
    {
        // Decrease the total product count
        totalProducts--;
    }
};


// Initialize the static variable with 0
int Product::totalProducts = 0;


int main()
{
    // Create the first product object
    Product p1(1001, "Laptop", 55000, 15);

    // Create the second product object
    Product p2(1002, "Mouse", 450, 50);

    // Create the third product object
    Product p3(1003, "Keyboard", 1200, 30);


    // Display the heading of the product catalog
    cout << "=== Product Catalog ===" << endl;


    // Display details of the first product
    p1.display();

    // Display details of the second product
    p2.display();

    // Display details of the third product
    p3.display();


    // Display the total number of products
    cout << "\nTotal Products in Catalog: "
         << Product::getTotalProducts() << endl;


    // End the program successfully
    return 0;
}