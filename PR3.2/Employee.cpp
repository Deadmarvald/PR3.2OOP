#include "Employee.h"
#include "Man.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

Employee::Employee(const int s)
{
	SetSal(s);
}

Employee::Employee(const Employee& x)
{
	int sal = x.GetSal();
	SetSal(sal);
}

Employee::~Employee()
{ }

Employee::operator string ()
{
	stringstream sout;
	sout << endl;
	sout << "Name: " << GetName() << endl;
	sout << "Age: " << GetAge() << endl;
	sout << "Salary: " << GetSal() << endl;

	return sout.str();
}

ostream& operator <<(ostream& out, Employee& x)
{
	out << string(x);

	return out;
}

istream& operator >>(istream& in, Employee& x)
{
	int age, sal;
	string name;
	cout << endl;
	cout << "Enter Name = "; in >> name;
	cout << "Enter Age = "; in >> age;
	cout << "Endter Salary = "; in >> sal;

	x.SetName(name);
	x.SetAge(age);
	x.SetSal(sal);

	return in;
}

void ChangeSal(Employee& x)
{
	x.sal += 1000;
}