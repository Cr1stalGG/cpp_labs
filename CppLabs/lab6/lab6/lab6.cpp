#include <iostream>

using namespace std;

void task1_3();
void task2_3();
void task3_5();

short costOfHotel(int seetsValue, bool isFoodIncluded, int cost[2][2]) {
	short x = 0, y = 0; // first and sec index of array

	seetsValue == 2 ? x++ : x;
	isFoodIncluded ? y++ : y;

	return cost[x][y];
}

int main() {
	setlocale(LC_ALL, "Russian");

	//task1_3();
	//task2_3();
	task3_5();

	return 0;
}

// вывести n-ную планету
void task1_3() {
	short num;

	string planets[8] = {
		"Mercury",
		"Venus",
		"Earth",
		"Mars",
		"Jupiter",
		"Saturn",
		"Uranus",
		"Neptune"
	};

	cin >> num;

	//cout << arr[num - 1]; - too ez

	switch (num)
	{
	case 1:
		cout << planets[0] << endl;
		break;
	case 2:
		cout << planets[1] << endl;
		break;
	case 3:
		cout << planets[2] << endl;
		break;
	case 4:
		cout << planets[3] << endl;
		break;
	case 5:
		cout << planets[4] << endl;
		break;
	case 6:
		cout << planets[5] << endl;
		break;
	case 7:
		cout << planets[6] << endl;
		break;
	case 8:
		cout << planets[7] << endl;
		break;
	default:
		cout << "$Error" << endl;
		break;
	}

}

// месяц по номеру
void task2_3() {
	int m, numOfMonth;
	string monthes[12] = {
		"January",
		"Fabruary",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"October",
		"November",
		"December",
	};

	cin >> m;

	numOfMonth = m % 12 + 1;

	//cout << monthes[numOfMonth - 1] << endl; - too ez

	switch (numOfMonth)
	{
	case 1:
		cout << monthes[0] << endl;
		break;
	case 2:
		cout << monthes[1] << endl;
		break;
	case 3:
		cout << monthes[2] << endl;
		break;
	case 4:
		cout << monthes[3] << endl;
		break;
	case 5:
		cout << monthes[4] << endl;
		break;
	case 6:
		cout << monthes[5] << endl;
		break;
	case 7:
		cout << monthes[6] << endl;
		break;
	case 8:
		cout << monthes[7] << endl;
		break;
	case 9:
		cout << monthes[8] << endl;
		break;
	case 10:
		cout << monthes[9] << endl;
		break;
	case 11:
		cout << monthes[10] << endl;
		break;
	case 12:
		cout << monthes[11] << endl;
		break;
	default:
		cout << "$Error" << endl;
		break;
	}
}

// расчёт стоимости проживания в отеле
void task3_5() {
	short numOfName, seetsValue;
	char isFoodFree;
	bool isFoodIncluded;
	int countOfDays;
	
	int costKur[2][2] = { {300, 330}, {360, 390} };
	int costVer[2][2] = { {110, 270}, {180, 270} };
	int costHuc[2][2] = { {80, 100}, {90, 130} };

	cout << "Choose the number of name(\"Kurortnaja\" - 1, \"Verhovina\" - 2, \"Huculka\" - 3)" << endl;
	cin >> numOfName;

	cout << "Input value of seets(1 or 2)" << endl;
	cin >> seetsValue;

	cout << "Is food included?(y/n)" << endl;
	cin >> isFoodFree;

	cout << "How many days?" << endl;
	cin >> countOfDays;

	if (countOfDays < 0) {
		cout << "Error";
	}
	else {

		isFoodFree == 'y' ? isFoodIncluded = true : isFoodIncluded = false;

		switch (numOfName)
		{
		case 1:
			cout << countOfDays * costOfHotel(seetsValue, isFoodIncluded, costKur) << endl;
			break;
		case 2:
			cout << countOfDays * costOfHotel(seetsValue, isFoodIncluded, costVer) << endl;
			break;
		case 3:
			cout << countOfDays * costOfHotel(seetsValue, isFoodIncluded, costHuc) << endl;
			break;
		default:
			cout << "$Error" << endl;
			break;

		}
	}
}