#pragma once
#include "Employee.h"

using namespace std;

class CEO : public Employee
{
public:
	CEO(string name, int salary, int annual_bonus); 


	int get_annual_bonus()
	{
		this->annual_bonus = annual_bonus;
	}

	virtual void output_job_description() override;

private:
	int annual_bonus;


};

