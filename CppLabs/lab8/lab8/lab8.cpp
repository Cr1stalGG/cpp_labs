#include <iostream>

using namespace std;

void task1_3();
void task2_3();
void task3_3();

int main()
{
	task3_3();

	return 0;
}

//table of func
double func_res(double x) {
	double y;
	const double R1 = 1;
	const double R2 = 2;
	if (x < -3 || x > 7)
		return -100;
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
		return y;
	}

}
void task1_3() {
	double x1, x2, step;
	cin >> x1 >> x2 >> step;

	for (double x = x1; x <= x2; x += step) {
		if (func_res(x) != -100)
			cout << x << " : " << func_res(x) << endl;
		else
			cout << x << " : " << "Error" << endl;
	}
}

// 2 func - ?
double f(double x) {
	return ((pow(x, 3) + 7)/17.0);
}
int f(int x) {
	return ((pow(x, 3) + 7) / 17);
}

void task2_3() {
	int x;
	cin >> x;
	cout << f(x) << endl;
}

//resursion count of symbols in number
void num(int n, int& res) {
	if (n > 0) {
		n -= n % 10;
		n /= 10;
		res++;
		num(n, res);
	}
	
}

void task3_3() {
	int res = 0;
	int n;
	cin >> n;
	num(n, res);
	cout << res << endl;
}