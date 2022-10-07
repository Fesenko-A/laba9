#pragma once
#include <iostream>
#include "Shape.h"
#include <windows.h>
using namespace std;

class Straight : public Shape {
public:
	Straight() {	//	Конструктор по замовченюю
		x = 0;
		y = 0;
		rot = 0;
		scale = 0;
	}

	void Show() {	//	Виведення прямої на екран
		cout << "\nВиведення фігури 'пряма' на екран..." << endl;
		cout << "*";
		for (int i = 0; i < 10; i++) {	//	Анімація малювання прямої
			Sleep(50);
			cout << "-";
		}
		cout << "*" << endl;
		cout << "Фігуру 'пряма' виведено на екран!" << endl;
	}

	void Destroy() {	//	Знищення прямої
		cout << "\nЗнищення фігури 'пряма'..." << endl;
		int n = 10;
		while (n > 1) {	//	Анімація знищення прямої
			cout << "*";
			for (int i = n; i > 1; i--) {
				Sleep(50);
				cout << "-";
			}
			n -= 3;
			cout << endl;
		}
		cout << "Фігуру 'пряма' знищено!" << endl;
	}
};