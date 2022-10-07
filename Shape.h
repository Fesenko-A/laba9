#pragma once
#include <iostream>
using namespace std;

class Shape {
protected:
	int x, y;	//	Координати центра фігури
	float rot;	//	Кут повороту (у градусах)
	float scale;	//	Масштабний фактор
	int moveX, moveY;	//	Координати вектору переміщення

public:
	void Read() {	//	Введення значень користувачем
		cout << "Введіть координати центра фігури" << endl;
		cout << "x: ";
		cin >> x;
		cout << "y: ";
		cin >> y;
		cout << "\nМасштабний фактор: ";
		cin >> scale;
	}

	void Rotate() {	//	Поворот фігури на заданий кут
		cout << "\nКут повороту у градусах: ";
		cin >> rot;

		cout << "\nФігуру повернуто на " << rot << " градуса(ів)" << endl;
	}

	void Move() {	//	Переміщення фігури на заданий вектор
		cout << "\nПереміщення фігури" << endl;
		cout << "Коорд. x вектора переміщення: ";
		cin >> moveX;
		cout << "Коорд. y вектора переміщення: ";
		cin >> moveY;

		cout << "Фігуру переміщено на вектор (" << moveX << ";" << moveY << ")" << endl;
	}

	virtual void Show() = 0 {	//	Показати фігуру на екрані
		cout << "\nВиведення фігури на екран..." << endl;
		cout << "Фігуру виведено на екран!" << endl;
	}

	virtual void Destroy() {	//	Знищення фігури
		cout << "\nЗнищення фігури..." << endl;
		cout << "\nФігуру знищено!" << endl;
	}
};