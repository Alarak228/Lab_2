#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int num;
	cout << "Введите год: ";
	cin >> num;
	system("cls");
	if (num % 4==0) {
		cout << num << " год, является високосным";
	}
	else {
		cout << num << " год, не високосный";
	}
	return 0;

}


