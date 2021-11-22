#include <iostream>
using namespace std;

int main()
{
	float salary;
	float newSalary;

	//Using $ instead of £ because of the encoding? Seems to display them as "?"s.
	cout << "How much money do you earn in a month? : $";
	cin >> salary;
	cout << "You earn $" << salary * 12 << " a year.\n";
	newSalary = salary * 1.1;
	cout << "With a 10% increase in payrise, you'd earn $" << newSalary << " a month, and you'd earn $" << newSalary * 12 << " a year.\n";
}