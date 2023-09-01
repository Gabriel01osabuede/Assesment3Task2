#include "CEO.h"
#include <iostream>

using namespace std;

using namespace std;

CEO::CEO(string name, int salary, int annual_bonus) : Employee(name, salary)
{
	this->annual_bonus = annual_bonus;
}

void CEO::output_job_description()
{
	cout << "CEO!! THE BAWSSS : $$$$" << this->annual_bonus  << endl;
}


