#include "Admin.h"


Admin::Admin(string name, int age, string sex, int workYears)
	:Employee(name, age, sex, workYears)
{
}

double Admin::getSalary() const
{
	double coef = 1.2;
	return coef;
}
