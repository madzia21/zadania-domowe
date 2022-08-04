#include "Employee.hpp"
#include <iostream>
#include <random>
#include <fstream>
Employee::Employee()
{
	_name = "bd";
	_lastname = "bd";
	_salary = 0;
	_lp = randomNumbersGenerator();
}
Employee::Employee(std::string name, std::string lastname, double salary, int lp) : 
	Employee()
{
	_name = name;
	_lastname = lastname;
	_salary = salary;
}
Employee::~Employee()
{
}
int Employee::randomNumbersGenerator(int range)
{
	std::random_device randomDevice;
	std::default_random_engine defaultRandomEngine(randomDevice());
	std::uniform_int_distribution<int> distribution(1, range);
	return distribution(defaultRandomEngine);
}
int Employee::getLP() const
{
	return _lp;
}
double Employee::getSalary() const
{
	return _salary;
}
std::string Employee::getLastname() const
{
	return _lastname;
}
std::string Employee::getName() const
{
	return _name;
}
void Employee::writeToFile(std::string fileName)
{
std::ofstream fout(fileName, std::ios::out | std::ios::app);
if (fout.is_open())
{
    if (fout.good())
    {
        fout << *this;
    }
}
fout.close();
}
std::ostream& operator<<(std::ostream& os, const Employee& employee)
{
	os << "lp " << employee._lp << std::endl;
	os << "name and lastname: " << employee._name << " " << employee._lastname << std::endl;
	os << "salary: " << employee._salary << std::endl;
	return os;
}
std::istream& operator>>(std::istream& is, Employee& employee)
{
	std::cout << "name: ";
	is >> employee._name;
	std::cout << "lastname: ";
	is >> employee._lastname;
	std::cout << "salary: ";
	is >> employee._salary;
	return is;
}