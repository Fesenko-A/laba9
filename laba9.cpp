/* Copyright(C) 2022, Anton Fesenko 202-TH №23

Створити абстрактний клас для роботи з геометричними фігурами на екрані. Передбачити такі 
компоненти–властивості класу: координати центра фігури; кут повороту (у градусах); масштабний фактор; 
і такі функції–методи: показати фігуру на екрані; зробити фігуру невидною (знищити її зображення); 
повернути фігуру на заданий кут (кут надається у градусах); пересунути фігуру на наданий вектор.

Для класу «Геометрична фігура» створити похідний клас для роботи з фігурою типу «пряма». 
Визначити інтерфейсну частину у класах, застосувати атрибути доступу. */

#include <Windows.h>
#include <iostream>
#include "Shape.h"
#include "Straight.h"
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Shape* figura;
    Straight* pryama = new Straight;
    figura = pryama;

    figura->Read();
    figura->Move();
    figura->Rotate();
    figura->Show();
    figura->Destroy();

    return 0;
}