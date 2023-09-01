#include "Programmer.h"
#include <iostream>


using namespace std;


Programmer::Programmer(string name, int salary, int bugs_fixed, int bugs_created) 
	: Employee(name, salary)
{
	this->bugs_created = bugs_created;
	this->bugs_fixed = bugs_fixed;
}

void Programmer::output_job_description()
{
	cout << "Programmer: Bugs Fixed: " << this->bugs_fixed << " Bugs Created: " << this->bugs_created << endl;
}