#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int num;
	cout << "Введите число: ";
	cin >> num;
	if (num%3==0 & num%5==0)
	{
		cout << "Число " << num << " делится на 5 и 3";
	}
	else {
		cout << "Число " << num << " не делится на 5 и 3";
	}
}


