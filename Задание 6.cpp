#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int num;
	cout << "Введите число: ";
	cin >> num;
	if (num % 100 == 0) {
		cout << num << " г. является вековым";
	}
	else
	{
		cout << num << " г. не явялется вековым";
	}
}

