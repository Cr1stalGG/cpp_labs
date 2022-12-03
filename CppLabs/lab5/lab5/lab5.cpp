#include <iostream>
#include "math.h"

#define R_FROM_SECOND_TASK -4 

#define R1 1
#define R2 2

using namespace std;

void task1_3();
void task2_3();
void task3_3();
void task4_3();


int main() {
	setlocale(LC_ALL, "Russian");

	//task1_3();
	//task2_3();
	//task3_3();
	task4_3();

	return 0;
}

// большее из 2 чисел
void task1_3() {
	double first, second;
	
	cin >> first >> second;

	first >= second ? cout << first << endl : cout << second << endl;
}

// принадлежит ли точка графику
void task2_3() {
	double x, y;

	cin >> x >> y;

	if ((y == 0 && x >= R_FROM_SECOND_TASK && x <= 0) || (x == 0 && y >= R_FROM_SECOND_TASK && y <= 0) || (pow(x, 2) + pow(y, 2) == pow(R_FROM_SECOND_TASK, 2) && x < 0 && y < 0))
		cout << "On border" << endl;
	else if (pow(x, 2) + pow(y, 2) < pow(R_FROM_SECOND_TASK, 2) && x < 0 && y < 0)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}

// реализовать функцию
void task3_3() {
	double x, fx;

	cin >> x;

	if (x <= -15)
		fx = sin(pow(x, -2));
	else if (x > -15 && x < 15)
		fx = exp(1) - 10 * x;
	else
		fx = -x;

	cout << fx;
}

// найти значение функции по графику
void task4_3() {
	double x, y;

	cin >> x;

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

		cout << y << endl;
	}
}
