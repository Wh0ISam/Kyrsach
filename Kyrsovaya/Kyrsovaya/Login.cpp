#include "Login.h"
#include <iostream>
#include <fstream>
using namespace std;
int Login(string user) {
	ifstream fin("D:\Login.txt");
	char name[50], name2[50];
	int a;
	bool check = false;
	fin >> a;
	if (!fin.is_open()) {
		cout << "Ошибка открытия файла!" << endl;
	}
	else {
		for (int i = 0; i != a; i++) {
			fin >> name;
			if (name == user) {
				check = true;
			}
		}
	}
	return (check);
}