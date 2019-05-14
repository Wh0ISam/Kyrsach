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
	while (a != 4) {
		menu();
		cin >> a;
		switch (a)
		{
		case 1: {
			cout << "Вы что-то купили" << endl;
			buy(user,BMW_X6);
			break;
		}
		case 2: {
			cout << "Вы что-то забронировали" << endl;
			break;
		}
		case 3: {
			
		}

		}
	}
	//buy();
	system("pause");
}