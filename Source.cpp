// Lab_02.cpp
// Володько Олег
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 3
#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double x;  // кут Альфа
	//double z1; результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу
	cout << "Який кут?"; cin >> x;
	//z1 = (sin(2*x)+sin(5*x)-sin(3*x))/(cos(x)+1-2*(sin(2*x)* sin(2 * x)));
	z2 = 2*sin(x);
	cout << endl;
	//cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}