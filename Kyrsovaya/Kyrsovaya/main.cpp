#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include "Login.h"
#include "Buy and reservation.h"
#include "BMW.h"
using namespace std;
void menu() {
	cout << "Введите что вы хотите сделать" << endl;
	cout << "1. Купить автомобиль." << endl;
	cout << "2. Забронировать автомобиль." << endl;
	cout << "3. Найти автомобиль." << endl;
	cout << "4. Закрыть программу." << endl;
	
}
int main() {
	BMW BMW_X6;
	bool check;
	string user;
	int a = 0;
	setlocale(LC_ALL, "rus");
	cout << "Введите свою имя и фамилию транскриптом слитно. Пример: IvanIvanov" << endl;
	cin >> user;
	check = Login(user);// проверка постоянного покупателя для скидки
	if (check)
		cout << "Добро пожаловать постоянный покупатель: " << user << endl;
	else
		cout << "Добро пожаловать: " << user << endl;
	BMW_X6.setPrice(200000);
	BMW_X6.setAccelerator(2.5);
	BMW_X6.setFuelconsumption(10);
	BMW_X6.setModel("X6");
	BMW_X6.setSeating(5);
	BMW_X6.setSpeed(250);
	BMW_X6.setVolume(10);
	BMW_X6.setWeight(950);
	while (a != 4) {
		menu();
		cin >> a;
		switch (a)
		{
		case 1: {
			buy(user,BMW_X6);//покупка
			break;
		}
		case 2: {
			reservation(user, BMW_X6);//бронирование
			break;
		}
		case 3: {// поиск
			
		}

		}
	}
	
	system("pause");
}