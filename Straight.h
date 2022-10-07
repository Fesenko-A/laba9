#pragma once
#include <iostream>
#include "Shape.h"
#include <windows.h>
using namespace std;

class Straight : public Shape {
public:
	Straight() {	//	����������� �� ����������
		x = 0;
		y = 0;
		rot = 0;
		scale = 0;
	}

	void Show() {	//	��������� ����� �� �����
		cout << "\n��������� ������ '�����' �� �����..." << endl;
		cout << "*";
		for (int i = 0; i < 10; i++) {	//	������� ��������� �����
			Sleep(50);
			cout << "-";
		}
		cout << "*" << endl;
		cout << "Գ���� '�����' �������� �� �����!" << endl;
	}

	void Destroy() {	//	�������� �����
		cout << "\n�������� ������ '�����'..." << endl;
		int n = 10;
		while (n > 1) {	//	������� �������� �����
			cout << "*";
			for (int i = n; i > 1; i--) {
				Sleep(50);
				cout << "-";
			}
			n -= 3;
			cout << endl;
		}
		cout << "Գ���� '�����' �������!" << endl;
	}
};