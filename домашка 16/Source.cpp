#include <iostream>
#include <algorithm>

using namespace std;

//������ 1
int meanValue(int a, int b) {
	int c;
	c = (a + b) / 2;
	return c;
}

//������ 2
int arrMeanValue(int array[], int lenght) {
	int sum = 0;
	for (int i = 0; i < lenght; i++)
		sum += array[i];
	return sum / lenght;
}
//������ 3
void power(int n, int m) {

	cout << "1, ";
	int res = 1;
	for (int i = 0; i < m; i++) {
		res *= n;
		cout << res << ", ";
	}
	cout << "\b\b.\n";
}


int main() {
	setlocale(LC_ALL, "Russian");


	//������ 1
	cout << "������ 1." << endl;
	cout << "������� �������������� ���� ���������: " << meanValue(1600, -30) << endl << endl;

	//������ 2
	int arr[9] = { 35,-51, 112, 70, 0, 16, 21, 84, 12 };
	cout << "������ 2." << endl;
	cout << "������� �������������� �������: " << arrMeanValue(arr, 9) << endl << endl;

	//������ 3
	cout << "������ 3." << endl;
	power(2, 10);


	return 0;
}