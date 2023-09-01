#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <queue>
#include "Programmer.h"
#include "CEO.h"
#include "Janitor.h"

//Creating a comparison method for the max heap.
struct CompareEmployees {
	bool operator()(Employee* emp1, Employee* emp2) {
		int Employee_1_Salary = emp1->get_salary();
		int Employee_2_salary = emp2->get_salary();

		return Employee_1_Salary < Employee_2_salary; // Max heap, so the employee with higher salary comes first
	}
};

int main()
{
	//std::priority_queue<Employee*> employees;
	
	std::priority_queue<Employee*, std::vector<Employee*>, CompareEmployees> employees;


	//Programmer object
	Employee* employee1 = new Programmer("Samuel the programmer", 200, 1, 3000);
	Employee* employee2 = new Programmer("John the programmer", 150, 1, 3100);
	Employee* employee3 = new Programmer("Philip the programmer", 130, 1, 3200);
	Employee* employee4 = new Programmer("Zeus the programmer", 130, 2, 3300);
	

	//CEO object
	Employee* employee5 = new CEO("Sarah the CEO", 500, 50000);
	Employee* employee6 = new CEO("Jude the CEO", 400, 51000);
	Employee* employee7 = new CEO("Sarah the CEO", 300, 52000);
	

	//Janitor object
	Employee* employee8 = new Janitor("David jacob", 100);
	Employee* employee9 = new Janitor("Paul jacob", 95);
	Employee* employee10 = new Janitor("Amos jacob", 70);

	employees.push(employee1);
	employees.push(employee2);
	employees.push(employee3);
	employees.push(employee4);
	employees.push(employee5);
	employees.push(employee6);
	employees.push(employee7);
	employees.push(employee8);
	employees.push(employee9);
	employees.push(employee10);

	//Max Heap impementation
	while (!employees.empty()) {

		Employee* topEmployee = employees.top();
		employees.pop();

		string name = topEmployee->get_name();
		int salary = topEmployee->get_salary();

		std::cout << "Employee Name: " << name << ", Salary: " << salary << std::endl;

		// Deleting the employee pointer since we allocated memory with new
		delete topEmployee;
	}
	return 0;
}



