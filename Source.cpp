#include <iostream>
using namespace std;
int main () {
//Series1?
//	. ���� ������ ������������ �����.����� �� �����.


	setlocale(LC_ALL, "Russian");
	//int  sum = 0, r;
	//int i;
	//for (i = 1; i <= 10; ++i) {
	//	cout << "i" << i << "-";
	//	cin >> r;
	//	sum += r;
//	}
	//cout << sum;
//	Series2.���� ������ ������������ �����.����� �� ������������.
	//int  mult= 1, r;
	//int i;
	//for (i = 1; i <= 10; ++i) {
	//	cout << "i" << i << "-";
	//	cin >> r;
	//	mult *= r;
	//Series3.���� ������ ������������ �����.����� �� ������� ��������������
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