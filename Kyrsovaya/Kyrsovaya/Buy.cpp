#include "Buy.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void buy() {

	//¬вод данных покупател€
	string mail, tellephone;
	cout << "¬ведите свою почту:" << endl;
	cin >> mail;
	cout << "¬ведите свой номер телефона: " << endl;
	cin >> tellephone;
	//—охранение заказа в файле
	ofstream fout("D:\Buy.txt");
	fout << mail << " " << tellephone;


}