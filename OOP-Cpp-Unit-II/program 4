#include <iostream>
#include <string>
#include <utility>

class Person {
protected:
std::string name;

public:
explicit Person(std::string personName) : name(std::move(personName)) {}

void showPerson() const {
std::cout << "Name: " << name << '\n';
}

};

class Employee : public Person {
protected:
int employeeId;

public:
Employee(std::string employeeName, int id)
: Person(std::move(employeeName)), employeeId(id) {}
void showEmployee() const {
std::cout << "Employee ID: " << employeeId << '\n';
}
};

class Manager : public Employee {
private:
int teamSize;

public:
Manager(std::string managerName, int id, int size)
: Employee(std::move(managerName), id), teamSize(size) {}

void showManager() const {
showPerson();
showEmployee();
std::cout << "Team Size: " << teamSize << '\n';
}
};

int main() {
Manager manager("Ravi", 501, 8);
manager.showManager();
return 0;

}
