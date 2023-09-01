#pragma once
#include "Employee.h"

using namespace std;

class Programmer : public Employee
{

public:
	Programmer(string name, int salary, int bugs_fixed, int bugs_created);

	int get_bugs_fixed()
	{
		return this->bugs_fixed;
	}

	int get_bugs_created()
	{
		return this->bugs_created;
	}

	virtual void output_job_description() override;

private:
	int bugs_fixed;
	int bugs_created;
};

