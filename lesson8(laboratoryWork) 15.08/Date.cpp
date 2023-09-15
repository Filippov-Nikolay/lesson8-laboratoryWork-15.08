#include <iostream>
#include "Date.h"

using namespace std;

Date::Date(int d, int m, int y) {
	day = d;
	month = m;
	year = y;
}

void Date::Input() {
	do {
		cout << "Введите число: ";
		cin >> day;
		if (day <= 0 || day > 31)
			cout << "Вы ввели неверное число!" << endl << endl;
	} while (day <= 0 || day > 31);

	do {
		cout << "Введите месяц: ";
		cin >> month;
		if (month <= 0 || month > 12)
			cout << "Вы ввели неверный месяц!" << endl << endl;
	} while (month <= 0 || month > 12);

	do {
		cout << "Введите год: ";
		cin >> year;
		if (year <= 0 || year > 2050)
			cout << "Вы ввели неверный год!" << year << endl;
	} while (year <= 0 || year > 2050);
}
void Date::Print() {
	printf("%s%d.%s%d.%d\n", day < 10 ? "0" : "", day, month < 10 ? "0" : "", month, year);
}


// Сеттеры
void Date::SetDay(int d) {
	if (d <= 0 || d > 31) {
		cout << "Вы ввели неверное число!" << endl << endl;
		return;
	}
		
	day = d;
}
void Date::SetMonth(int m) {
	if (m <= 0 || m > 31) {
		cout << "Вы ввели неверный месяц!" << endl << endl;
		return;
	}

	month = m;
}
void Date::SetYear(int y) {
	if (y <= 0 || y > 31) {
		cout << "Вы ввели неверный год!" << endl << endl;
		return;
	}

	year = y;
}


// Геттеры
int Date::GetDay() const {
	return day;
}
int Date::GetMonth() const {
	return month;
}
int Date::GetYear() const {
	return year;
}


Date& Date::operator++() {
	day += 1;

	if (day > 31) {
		day = 1;
		month += 1;

		if (month > 12) {
			month = 1;
			year += 1;
		}
	}

	return *this;
}
Date& Date::operator--() {
	day -= 1;

	if (day <= 0) {
		day = 31;
		month -= 1;

		if (month <= 0) {
			month = 12;
			year -= 1;
		}
	}

	return *this;
}

Date& Date::operator++(int d) {
	day += 1;

	if (day > 31) {
		day = 1;
		month += 1;

		if (month > 12) {
			month = 1;
			year += 1;
		}
	}

	return *this;
}
Date& Date::operator--(int d) {
	day -= 1;

	if (day <= 0) {
		day = 31;
		month -= 1;

		if (month <= 0) {
			month = 12;
			year -= 1;
		}
	}

	return *this;
}

// 28.10.2023 + 10 day = 08.10.2023
// 28.10.2023 + 100 day = 05.02.2024 +-
// 28.10.2023 + 10000 day = 16.09.2050 +-

Date Date::operator+(int d) { 
	int i = 0;
	d+=1;

	while (i < d) {
		day += 1;

		if (day > 31) {
			day = 1;
			month += 1;

			if (month > 12) {
				month = 1;
				year += 1;
			}
		}

		i++;
	}

	/*
	for (int i = 0; i < d; i++) {
		day -= 31;

		if (day <= 0) {
			day += 31;
			month += i;

			if (month > 12)
				month -= 12;
			break;
		}
	}
	*/
	/*
	if (day > 31) {
		day = (tempDay + d + 1) - 31;
	}
	*/
	

	/*
	if (day > 31) {
		day = 1;
		month += 1;

		if (month > 12) {
			month = 1;
			year += 1;
		}
	}
	*/

	return *this;
}
Date Date::operator-(int d) {
	int i = 0;
	d += 1;

	while (i < d) {
		day -= 1;

		if (day <= 0) {
			day = 31;
			month -= 1;

			if (month <= 0) {
				month = 12;
				year -= 1;
			}
		}

		i++;
	}

	return *this;
}
Date Date::operator-(Date a) {
	return Date(day - a.day, month - a.month, year - a.year);
}

Date Date::operator+=(int d) {
	int i = 0;
	d += 1;

	while (i < d) {
		day += 1;

		if (day > 31) {
			day = 1;
			month += 1;

			if (month > 12) {
				month = 1;
				year += 1;
			}
		}

		i++;
	}

	return *this;
}
Date Date::operator-=(int d) {
	int i = 0;
	d += 1;

	while (i < d) {
		day -= 1;

		if (day <= 0) {
			day = 31;
			month -= 1;

			if (month <= 0) {
				month = 12;
				year -= 1;
			}
		}

		i++;
	}

	return *this;
}

bool Date::operator<(Date d) {
	if (day < d.day && month < d.month && year < d.year)
		return true;
	return false;
}
bool Date::operator>(Date d) {
	if (day > d.day && month > d.month && year > d.year)
		return true;
	return false;
}
bool Date::operator<=(Date d) {
	if (day <= d.day && month <= d.month && year <= d.year)
		return true;
	return false;
}
bool Date::operator>=(Date d) {
	if (day >= d.day && month >= d.month && year >= d.year)
		return true;
	return false;
}
bool Date::operator==(Date d) {
	if (day == d.day && month == d.month && year == d.year)
		return true;
	return false;
}
bool Date::operator!=(Date d) {
	if (day != d.day && month != d.month && year != d.year)
		return true;
	return false;
}
