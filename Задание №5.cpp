#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int num1;
		int num2 = 1;
		cout << "Введите число: ";
		cin >> num1;
		for(int i = 0; num2<=num1;i++)
		{
			if (num1 == num2)
			{
				cout << "Степень -  " << sqrt(num1) << " является степенью двойки";
				return 0;
			}
			num2 *= 2;
		}
		cout << "У числа " << num1 << " нет связей со степенью двойки";
}

