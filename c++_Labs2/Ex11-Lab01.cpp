#include <iostream>
using namespace std;

/*
Варіант 11.

Написати клас ZARPLATA, який містить наступні поля:

- Name – прізвище ім‘я та по батькові працівника;

- Date – дата народження;

- Work_day – кількість відпрацьованих днів;

- Stavka – ставка з урахуванням на 24 робочих дні;

- Naraxovano – нараховано заробітної плати з урахуванням ставки і кількості
відпрацьованих днів;

Виконав Заєць Нікіта група 222/1
*/


class Zarplata // Define a class named Zarplata
{
public:
	// Default constructor
	Zarplata() {}

	// constructor with parameters
	Zarplata(string name, string data, int work_days, int stavka) {
		this->name = name;
		this->date_birthday = data;
		this->work_days = work_days;
		this->stavka = stavka;
	}

	// Function to calculate salary
	void Naraxovano() {
		cout << "нараховано заробітної плати з урахуванням ставки і кількості відпрацьованих днів: " << work_days * stavka << endl;
	}

	// Function to print the details of a class instance
	void Print() {
		cout << "Name: " + getName() << endl << "Date_birthday: " + getDate_birthday() <<
			endl << "Work_days: " << getWorkDays() << endl << "stavka: " << getStavka() << endl;
	}


	// Setters to assign values to the private variables of the class instance
	void setName(string name) {
		this->name = name;
	}
	void setDateBirthday(string date) {
		date_birthday = date;
	}
	void setWorkDays(int work_days) {
		this->work_days = work_days;
	}
	void setStavka(double stavka) {
		this->stavka = stavka;
	}

	// Getters to retrieve the values of the private variables of the class instance
	string getName() {
		return name;
	}
	string getDate_birthday() {
		return date_birthday;
	}
	int getWorkDays() {
		return work_days;
	}
	double getStavka() {
		return stavka;
	}

	// Destructor
	~Zarplata() {}
private:
	// Private variables of the class
	string name;
	string date_birthday;
	int work_days;
	double stavka;
};


int main()
{
	// Creating an instance of the Zarplata class using default(null) constructor
	Zarplata max;
	max.setName("Max");
	max.setDateBirthday("21.1.2000");
	max.setWorkDays(21);
	max.setStavka(550);
	max.Print(); // function call
	max.Naraxovano(); // function call

	cout << endl;

	// Creating an instance of the Zarplata class using parameterized constructor
	Zarplata tom("Tom", "11.6.2001", 24, 600);
	cout << tom.getName() << endl;
	cout << tom.getDate_birthday() << endl;
	cout << tom.getWorkDays() << endl;
	cout << tom.getStavka() << endl;
	tom.Print(); // function call
	tom.Naraxovano(); // function call
}