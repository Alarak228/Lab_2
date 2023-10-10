#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int num;
	cout << "Введите число" << endl;
	cin >> num;
	system("cls");
	if (num > 0) {
		cout << "Число положительное" << endl;
	}
	else if (num < 0) {
		cout << "Число отрицательное" << endl;
	}
	else {
		cout << "Число является нулём" << endl;
}
    
}


