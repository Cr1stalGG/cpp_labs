#include <iostream>

using namespace std;

char sur = 'S', nam = 'A';
int f = (int)'2', s = (int)'3';

void task1() {
	cout << sur << " : " << (int)sur << endl; //фамилия и имя
	cout << nam << " : " << (int)nam << endl;
}

void task2() {
	cout << f << " - " << (char)f << endl;
	cout << s << " - " << (char)s << endl;

}
 
void task3() {
	const int a = 8;
	const int b = 7;

	cout << int(a == b) << endl;
	cout << int(a != b) << endl;
	cout << int(a > b) << endl;
	cout << int(a > 10 && b < 9) << endl;
	cout << int(a > 5 || b < 9) << endl;

}

void task4_3() {
	double a, b, c;

	cout << "Input len of sides of triangle" << endl; 
	cin >> a >> b >> c; // вводим стороны

	if (a > 0 && b > 0 && c > 0){ //проверка на корректность длин сторон
		if (a == b || b == c|| c == a) //проверка на равнобедренный
			cout << "YES";
		else
			cout << "NO";
	}
	else {
		cout << "$Incorrect input data..." << endl; 
	}
}

int main()
{
	//setlocale(LC_ALL, "Russian");
	
	//task1();
	//task2();
	//task3(); 
	task4_3();


	return 0;
}
