#include <iostream>
#include <string>

#include <utility>

class Employee {
protected:
std::string name;

public:
explicit Employee(std::string employeeName) : name(std::move(employeeName)) {}
};
class Developer : public Employee {
private:
std::string language;
public:
Developer(std::string employeeName, std::string programmingLanguage)
: Employee(std::move(employeeName)), language(std::move(programmingLanguage)) {}

void display() const {
std::cout << "Developer: " << name << '\n';
std::cout << "Language: " << language << '\n';
}
};

int main() {
Developer developer("Neha", "C++");
developer.display();
return 0;
}
