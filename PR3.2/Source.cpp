#include <iostream>
#include "Employee.h"

using namespace std;

int main()
{
	Employee pr;

	cout << "Enter: "; cin >> pr;
	cout << pr << endl;

	cout << "Today is " << pr.GetName() << "\'s birthday" << endl;

	ChangeAge(pr);

	cout << pr.GetName() << " turned " << pr.GetAge() << endl;

	cout << "In honor of " << pr.GetName() << "\'s birthday raised his salary" << endl;

	ChangeSal(pr);

	cout << pr.GetName() << "\'s new salary is " << pr.GetSal() << endl;

	system("pause");
	return 0;
}