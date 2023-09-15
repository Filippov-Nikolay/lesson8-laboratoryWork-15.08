#pragma once
class Date {
	int day;
	int month;
	int year;
public:
	Date() = default;
	Date(int, int, int);

	void Input();
	void Print();

	// Аксессоры
	// Сеттеры
	void SetDay(int);
	void SetMonth(int);
	void SetYear(int);

	// Геттеры
	int GetDay() const;
	int GetMonth() const;
	int GetYear() const;

	// Операторы
	Date& operator++();
	Date& operator--();

	Date& operator++(int d);
	Date& operator--(int d);

	Date operator+(int d);
	Date operator-(int d);
	Date operator-(Date a);

	Date operator+=(int d);
	Date operator-=(int d);

	bool operator<(Date d);
	bool operator>(Date d);
	bool operator<=(Date d);
	bool operator>=(Date d);
	bool operator==(Date d);
	bool operator!=(Date d);
};

