#include "Buy and reservation.h"
#include <iostream>
#include <fstream>
#include <string>
#include "BMW.h"
#include <time.h>
using namespace std;

void buy(string name, BMW avto) {

	//Ввод данных покупателя
	string mail, tellephone, user, line;
	int discount, check = 0, price;
	cout << "Введите свою почту:" << endl;
	cin >> mail;
	cout << "Введите свой номер телефона: " << endl;
	cin >> tellephone;
	//Рассчет скидки
	price = avto.getPrice();
	ifstream fin("D:\Buy.txt");
	
	while (getline(fin, line)) {
		fin >> user;
		if (user == name) 
			check++;
		
	}
	cout << check << endl;
	fin.close();
	discount = price / 100 * check;
	price = price - discount;
	cout << price << endl;;
	
	//Сохранение заказа в файле
	ofstream fout("D:\Buy.txt", ios_base::app);
	fout << name << " " << mail << " " << tellephone << "\n";
	fout.close();
	

}

void reservation(string user, BMW avto)
{
	// запись бронирования
	int a;
	cout << "1.Забронировать. 2. Проверить свою бронь " << endl;
	cin >> a;
	switch (a)
	{

	case 1: {
		//бронирование через генерацию ключей
		ofstream fout("D:\Reservation.txt", ios_base::app);
		char s;
		char key[5];
		int x;
		srand(time(NULL));
		for (int i = 0; i != 5; i++) {
			x = rand() % 30 + 1;
			s = (x + 0x41);
			key[i] = s;
		}
		fout << user << " ";
		for (int i = 0; i != 5; i++) {
			fout << key[i];
		}
		fout << "\n";
		fout.close();
		break;
	}
	case 2: {
		// проверка брони пользователя
		string line, name, key,checkkey;
		ifstream fin("D:\Reservation.txt");
		cout << "Введите номер брони." << endl;
		cin >> key;

		while (getline(fin, line)) {
			fin >> name;
			fin >> checkkey;
			if (name == user & key == checkkey)
				cout << "У вас есть забронированная машина."<<endl;

		}
		break;
	}
	}
}
