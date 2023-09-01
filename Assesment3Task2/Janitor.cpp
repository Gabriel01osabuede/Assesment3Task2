#include "Janitor.h"
#include <iostream>

using namespace std;

Janitor::Janitor(string name, int salary)
	: Employee(name, salary)
{
}

void Janitor::output_job_description()
{
	cout << "The Janitors name's are : " << name << " and he cleans the offices and recieves : " << salary << "as payment." << endl;
}
