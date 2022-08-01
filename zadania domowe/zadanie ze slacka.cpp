#include <iostream>
#include <fstream>
#include "Employee.hpp"
#include "File.h"

int main()
{
    Employee employee1("Anna", "Mikina", 10000, 1);
    std::cout << employee1;
    Employee employee2;
    std::cin >> employee2;
    std::cout << employee2;
    employee1.writeToFile();
   // employee2.writeToFile();
    File<Employee> file("plik3.txt", employee2);
}