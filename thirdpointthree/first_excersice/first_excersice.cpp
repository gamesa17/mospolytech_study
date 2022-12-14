// first_excersice.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{

    setlocale(LC_ALL, "rus");
    //создайте переменную (№1)
    int number = 17;

    //объявите указатель на данную переменную (№2)
    int* ptnumber = &number;

    //выведите адрес и значения указателя этой переменной (№3)
    cout << "Вывод адреса указателя: " << ptnumber << endl;
    cout << "Вывод значения, которое хранится по этому адресу: " << *ptnumber << endl;

    //измените значение, которое хранится по адресу указателя (№4) и (№5)
    *ptnumber = 69;
    cout << "\nИзменённое значение переменной по адресу указателя: " << number << endl;
    cout << endl;

    //создайте массив из некольких элементов (№6)
    int massiv[] = { 17, 1, 2, 3, 4, 5, 6 };

    //выведите все элемента массива, используя указатель (№7)
    int(*ptr)[7] = &massiv;

    for (int i = 0; i < 7; i++)
    {
        cout << "Элемент массива № " << i << " выведен через указатель массива: " << (*ptr)[i] << endl;
    }

    //объявите целую переменную со значением 5 (№8)
    int five = 5;

    //создать такой указатель, у которого нельзя менять адрес (№9)
    int* const ptfive = &five;
    
   /*Error C3892 ptfive: невозможно присваивать значения переменной, которая объявлена как константа
   ptfive = ptnumber;
   */

    //меняем значение переменной через указатель (№10)
    *ptfive = 23;
    cout <<"\nНовое значение переменной, присвоенное через указатель: " << five << endl;


}

