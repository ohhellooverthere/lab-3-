/* Реалізувати чисельне обчислення кореня n-того ступеня */
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	double A;// наше число
	double  n;//наш степень
	double res;
	cout << "введите число: ";
	cin >> A;
	cout << "введите степень: ";
	cin >> n;
	if (A < 0)
	{
		cout << "Ошибка ";
		exit(0);
	}
	res = pow(A, 1 / n);
	cout << "Результат = " << res;
	return 0;
}


