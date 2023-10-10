#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int num1;
	double num2;
    double num3 = 0;
	cout << "Введите число: ";
	cin >> num2;
	for (num1 = 1; num1 < num2; num1++)
		if (num2 / num1 == int(num2 / num1))
			num3 += num1;
	if (num3 == num2)
		cout << "Введеное число является совершенным";
	else
		cout<<"Введеное число не является совершенным";

}

