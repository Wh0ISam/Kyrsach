#include "Buy and reservation.h"
#include <iostream>
#include <fstream>
#include <string>
#include "BMW.h"
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
	cout << price;
	
	//Сохранение заказа в файле
	ofstream fout("D:\Buy.txt", ios_base::app);
	fout << name << " " << mail << " " << tellephone << "\n";
	fout.close();
	

}