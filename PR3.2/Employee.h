#pragma once

#include "Man.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Employee : public Man
{
private:
	int sal;

public:
	Employee(int const sal = 0);
	Employee(const Employee& x);
	~Employee();

	int GetSal() const { return sal; }
	void SetSal(int value) { sal = value; }

	operator string();
	friend ostream& operator <<(ostream& out, Employee& x);
	friend istream& operator >>(istream& in, Employee& x);

	friend void ChangeSal(Employee& x);
};