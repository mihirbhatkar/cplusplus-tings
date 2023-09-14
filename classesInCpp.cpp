#include <iostream>

class Employee
{
private:
    int salary;

public:
    void setSalary(int s)
    {
        salary = s;
    }

    int getSalary()
    {
        return salary;
    }

    Employee()
    {
    }

    Employee(Employee &e) // copy constructor
    {
        salary = e.getSalary();
    }
};

int main()
{
    Employee vishal;
    vishal.setSalary(10000);
    std::cout << vishal.getSalary() << std::endl;

    Employee amit(vishal);
    std::cout << amit.getSalary();
    return 0;
}

// if you don't define a constructor, compiler will create a default constructor
//  if we define our own constructor, the compiler doesn't create a default constructor
