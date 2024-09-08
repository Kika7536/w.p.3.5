#include<iostream>
using namespace std;


void main() {
	setlocale(LC_ALL, "rus");

	int a, b;

	cout << "Введите первое число: ";
	cin >> a;
	cout << "Введите второе число: ";
	cin >> b;
	cout << "-----Проверяем-----" << endl;

	if (a % b == 0) {
		cout << "Да, " << a << " делится на " << b << " без остатка!" << endl;
	}
	else {
		cout << "Нет, " << a << " не делится на " << b << " без остатка!" << endl;
	}
}