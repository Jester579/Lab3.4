/*
Lab_03.4
������� �������
����������� ������ � 3.4
������������, ������ ������� �������
������ 5
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

	cout << "������ x: " << endl; cin >> x;
	cout << "������ y: " << endl; cin >> y;
	cout << "������ R: " << endl; cin >> R;


	if (0 <= x && 0 <= y)
		if ((x * x) + (y * y) <= R * R)
			cout << "���";
		else
			cout << "ͳ";
	
	if (x <= 0 && y <= 0)
		if ((x * x) + (y * y) <= R * R)
			cout << "���";
		else
			cout << "ͳ";

	if (x < 0 && y > 0)
		if ((x * x) + (y * y) < R * R)
			cout << "���";
		else
			cout << "ͳ";

	if (x > 0 && y < 0)
		cout << "ͳ";

	

	return 0;
}

