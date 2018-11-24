#pragma once
#include "Employee.h"

class Admin :
	public Employee
{
public:
	Admin(string name, int age, string sex, int workYears);

	double getSalary()const override;
};

