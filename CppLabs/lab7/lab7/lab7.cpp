#include <iostream>

using namespace std;

void task1_4();
void task2_6();
void task3_3();
void task4_4();
void task5_4();
void task6_4();


int main()
{
	task6_4();

	return 0;
}

//Произведение n чисел
void task1_4() {
	int n, res=1, el;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> el;
		res *= el;
	}
	cout << res;
}

//10 попыток попасть в цель
void task2_6() {
	double x, y;
	
	for (int i = 0; i < 10; i++) {
		cin >> x >> y;
		if (x >= 0 && (pow(x, 2) + pow(y, 2)) <= 1)
			cout << "Попадание1" << endl;
		else
			cout << "Мимо2" << endl;
	}
}

//таблица значений функции
void task3_3() {
	const double R1 = 1;
	const double R2 = 2;
	double  x1, x2, step;
	cin >> x1 >> x2 >> step;
	double y = 0;
	
	for (double x = x1; x <= x2; x += step) {
		if (x < -3 || x > 7)
			cout << "$Error" << endl;
		else {
			if (x >= -3 && x <= -2)
				y = -x - 2;
			else if (x >= -2 && x <= 0)
				y = sqrt(pow(R1, 2) - pow(x + 1, 2));
			else if (x >= 0 && x <= 4)
				y = -sqrt(pow(R2, 2) - pow(x - 2, 2));
			else if (x >= 4 && x <= 6)
				y = -0.5 * (x - 4);
			else
				y = -1;

			cout << x << " : " << y << endl;
		}
	}
}

// таблица ряд Тейлора - переделать
void task4_4() {
	double x1, x2, step;
	cin >> x1 >> x2 >> step;
	
	double result = 0;
	int n = 0;

	for (double x = x1; x <= x2; x+=step) {
		result += pow(x, n);
		cout << x << " : " << result << 1.0/(1-x) << endl;
		n++;
	}
}

//вывести треугольник
void task5_4() {
	for (int i = 5; i >= 0; i--) {
		for (int ii = 0; ii <= i; ii++) {
			cout << ii << " ";
		}
		cout << endl;
	}
}

//dec to bin - without string
void task6_4() {
	int num;
	cin >> num;
	if (num <= 0) {
		cout << "Error" << endl;
	} else {
		string bin = "";

		while (num >= 1) {
			bin += (char)(num % 2 + 48);
			num = (num - num % 2) / 2;
			cout << (char)(num % 2 + 48) << endl;
		}

		reverse(bin.begin(), bin.end());
		cout << bin;
	}
}