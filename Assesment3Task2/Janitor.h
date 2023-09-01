#pragma once
#include "Employee.h"

class Janitor : public Employee
{
public:
	Janitor(string janitorname, int salary);

	virtual void output_job_description() override;

};

