/*
Lab_03.4
Демчука Максима
Лабораторна робота № 3.4
Розгалуження, задане плоскою фігурою
Варіант 5
*/

#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double x;
	double R;
	double y;

	cout << "Введіть x: " << endl; cin >> x;
	cout << "Введіть y: " << endl; cin >> y;
	cout << "Введіть R: " << endl; cin >> R;


	if (0 <= x && 0 <= y)
		if ((x * x) + (y * y) <= R * R)
			cout << "Так";
		else
			cout << "Ні";
	
	if (x <= 0 && y <= 0)
		if ((x * x) + (y * y) <= R * R)
			cout << "Так";
		else
			cout << "Ні";

	if (x < 0 && y > 0)
		if ((x * x) + (y * y) < R * R)
			cout << "Так";
		else
			cout << "Ні";

	if (x > 0 && y < 0)
		cout << "Ні";

	

	return 0;
}

