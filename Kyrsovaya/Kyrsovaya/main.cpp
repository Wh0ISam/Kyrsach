#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include "Login.h"
#include "Buy.h"
using namespace std;
int main() {
	bool check;
	string user;
	setlocale(LC_ALL, "rus");
	cout << "Введите свою имя и фамилию транскриптом слитно. Пример: IvanIvanov" << endl;
	cin >> user;
	check = Login(user);// проверка постоянного покупателя для скидки
	if (check)
		cout << "Добро пожаловать постоянный покупатель: " << user << endl;
	else
		cout << "Добро пожаловать: " << user << endl;
	buy();
	system("pause");
}