#include <iostream>
#include <algorithm>

using namespace std;

//Задача 1
int meanValue(int a, int b) {
	int c;
	c = (a + b) / 2;
	return c;
}

//Задача 2
int arrMeanValue(int array[], int lenght) {
	int sum = 0;
	for (int i = 0; i < lenght; i++)
		sum += array[i];
	return sum / lenght;
}
//Задача 3
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


	//Задача 1
	cout << "Задача 1." << endl;
	cout << "Среднее арифметическое двух элементов: " << meanValue(1600, -30) << endl << endl;

	//Задача 2
	int arr[9] = { 35,-51, 112, 70, 0, 16, 21, 84, 12 };
	cout << "Задача 2." << endl;
	cout << "Среднее арифметическое массива: " << arrMeanValue(arr, 9) << endl << endl;

	//Задача 3
	cout << "Задача 3." << endl;
	power(2, 10);


	return 0;
}