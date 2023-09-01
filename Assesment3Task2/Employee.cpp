#include "Employee.h"
#include <iostream>


using namespace std;

Employee::Employee(string name, int salary)
{
	this->name = name;
	this->salary = salary;
}

void Employee::output_earnings()
{
	cout << "$" << this->salary << endl;
} 

void Employee::output_job_description() {}