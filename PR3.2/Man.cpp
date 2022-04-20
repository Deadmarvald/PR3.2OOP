#include "Man.h"

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

Man::Man(string N, int A) : name(N), age(A)
{ }

Man::Man(const Man& x)
{
	this->name = x.name;
	this->age = x.age;
}

Man::~Man()
{ }

Man::operator string() const
{
	stringstream sout;
	sout << endl;
	sout << "Name: " << name << endl;
	sout << "Age: " << age << endl;

	return sout.str();
}

ostream& operator <<(ostream& out, const Man& x)
{
	out << string(x);

	return out;
}

istream& operator >>(istream& in, Man& x)
{
	cout << endl;
	cout << "Name = "; in >> x.name;
	cout << "Age ="; in >> x.age;

	return in;
}

void ChangeAge(Man& x)
{
	x.age++;
}