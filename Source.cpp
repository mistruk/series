#include <iostream>
using namespace std;
int main () {
//Series1?
//	. Даны десять вещественных чисел.Найти их сумму.


	setlocale(LC_ALL, "Russian");
	//int  sum = 0, r;
	//int i;
	//for (i = 1; i <= 10; ++i) {
	//	cout << "i" << i << "-";
	//	cin >> r;
	//	sum += r;
//	}
	//cout << sum;
//	Series2.Даны десять вещественных чисел.Найти их произведение.
	//int  mult= 1, r;
	//int i;
	//for (i = 1; i <= 10; ++i) {
	//	cout << "i" << i << "-";
	//	cin >> r;
	//	mult *= r;
	//Series3.Даны десять вещественных чисел.Найти их среднее арифметическое
	int  sum = 1, r;
	int i;
	for (i = 1; i <= 10; ++i) {
		cout << "i" << i << "-";
		cin >> r;
		sum += r;
	}
	cout << sum;
	sum = sum / 10;

}