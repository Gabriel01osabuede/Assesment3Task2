#pragma once
#include <string>

using namespace std;

class Employee
{
	
public: 
	Employee(string name, int salary);

	void output_earnings();
	virtual void output_job_description() = 0;

	string get_name()
	{
		return name;
	}

	int get_salary()
	{
		return salary;
	}

protected:
	string name;
	int salary;
};

