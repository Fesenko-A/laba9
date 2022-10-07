#pragma once
#include <iostream>
using namespace std;

class Shape {
protected:
	int x, y;	//	���������� ������ ������
	float rot;	//	��� �������� (� ��������)
	float scale;	//	���������� ������
	int moveX, moveY;	//	���������� ������� ����������

public:
	void Read() {	//	�������� ������� ������������
		cout << "������ ���������� ������ ������" << endl;
		cout << "x: ";
		cin >> x;
		cout << "y: ";
		cin >> y;
		cout << "\n���������� ������: ";
		cin >> scale;
	}

	void Rotate() {	//	������� ������ �� ������� ���
		cout << "\n��� �������� � ��������: ";
		cin >> rot;

		cout << "\nԳ���� ��������� �� " << rot << " �������(��)" << endl;
	}

	void Move() {	//	���������� ������ �� ������� ������
		cout << "\n���������� ������" << endl;
		cout << "�����. x ������� ����������: ";
		cin >> moveX;
		cout << "�����. y ������� ����������: ";
		cin >> moveY;

		cout << "Գ���� ��������� �� ������ (" << moveX << ";" << moveY << ")" << endl;
	}

	virtual void Show() = 0 {	//	�������� ������ �� �����
		cout << "\n��������� ������ �� �����..." << endl;
		cout << "Գ���� �������� �� �����!" << endl;
	}

	virtual void Destroy() {	//	�������� ������
		cout << "\n�������� ������..." << endl;
		cout << "\nԳ���� �������!" << endl;
	}
};