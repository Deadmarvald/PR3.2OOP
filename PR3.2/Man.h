#pragma once

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Man
{
private:
	string name;
	int age;

public:
	Man(const string N = "0", const int A = 0);
	Man(const Man& x);
	~Man();

	string GetName() const { return name; }
	int GetAge() const { return age; }
	void SetName(const string value) { name = value; }
	void SetAge(const int value) { age = value; }

	operator string() const;
	friend ostream& operator <<(ostream& out, const Man& x);
	friend istream& operator >>(istream& in, Man& x);

	friend void ChangeAge(Man& x);
};