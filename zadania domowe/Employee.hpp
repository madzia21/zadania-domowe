#pragma once
#include <string>
#include "File.h"
class Employee
{
private:
	std::string _name;
	std::string _lastname;
	double _salary;
	int _lp = -1;
public:
	Employee();
	Employee(std::string name, std::string lastname, double salary, int lp);
	~Employee();

	int randomNumbersGenerator(int range=1000);

	int getLP() const;
	double getSalary() const;
	std::string getLastname() const;
	std::string getName() const;

	friend std::ostream& operator<<(std::ostream& os, const Employee& employee);
	friend std::istream& operator>>(std::istream& is, Employee& employee);
	void writeToFile(std::string fileName = "plik2.txt");
};



