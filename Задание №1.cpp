#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int num1;
	int num2 = 2;
	cout << "Введите число ";
	cin >> num1;
	system("cls");
	while (num1%num2 != 0) {
		num2++;
	}
	if (num1 == num2) {
		cout << "Число простое";
	}
	else {
		cout << "Число не  простое";
	}
	return 0;
}

