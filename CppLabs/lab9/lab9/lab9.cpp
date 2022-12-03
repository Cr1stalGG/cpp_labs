#include <iostream>

using namespace std;

void task1_6();
void task2_6();


int main() {
	task2_6();

	return 0;
}

void task1_6() {
	int n;
	cin >> n;
	if (n <= 0) {
		cout << "Error" << endl;
	}
	else {
		int counter1 = 0; // 1. количество элементов, значения которых больше значения предыдущего элемента
		int counter2 = 0; // 2. количество пар соседних элементов, в которых предыдущий элемент меньше последующего

		int* arr = new int[n];

		cin >> arr[0];

		for (int i = 1; i < n; i++) {
			cin >> arr[i];
			if (arr[i] > arr[i - 1])
				counter1++;
			if (arr[i - 1] < arr[i])
				counter2++;
		}

		cout << counter1 << " " << counter2 << endl;
	}
}

double comparator(double num) {

	return num - (int)num;
}

void task2_6() {
	int n;
	cin >> n;
	if (n <= 0) {
		cout << "Error" << endl;
	}
	else {
		double dr;

		double sum1 = 0;
		double sum2 = 0;

		int fp = -1, sp = -1; // indexes of fir and sec el > 0

		double* arr = new double[n];

		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			if (arr[i] > 0 && fp == -1)
				fp = i;
			else if (arr[i] > 0 && fp != -1 && sp == -1)
				sp = i;
		}

		double k;
		cin >> k;

		for (int i = 0; i < n; i++) {
			if (comparator(arr[i]) > k)
				sum2++;
		}
		if (fp != -1 && sp != -1) {
			for (int i = fp; i <= sp; i++) {
				sum1 += arr[i];
			}
		}
		else {
			cout << "There are less than 2 + elements" << endl;
		}
		cout << sum1 << endl;
		cout << sum2 << endl;

	}
}