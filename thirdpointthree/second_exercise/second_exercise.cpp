﻿// second_exercise.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

//создайте функцию, которая принимает 2 указателя на начало и конец массива и выводит его сумму (№1)
int summ(int* begin, int* end)
{
    int result = 0;
    for (int* i = begin; i != end; i++) 
    {
        result += *i;
    }
    return result;
}


//создайте 2 функции, считаю разность и сумму двух чисел (№3)
int difference(int number1, int number2)
{
    return number1 - number2;
}

int addition(int number1, int number2)
{
    return number1 + number2;
}

//создайте функцию, принимающую параметр char, возвращающую указатель на вызванную внутри функцию (№4) и (№5)
void operation(char sign)
{
    cout << "РАБОТА ФУНКЦИИ: ";

    int(*action)(int a, int b);

    if (sign == '+')
    {
        action = addition;
        cout << "указатель функции суммы = " << action << endl;
    }

    if (sign == '-')
    {
        action = difference;
        cout << "указатель функции разности = " << action << endl;
    }
}


int main()
{
    setlocale(LC_ALL, "rus");

    //проверка функции с двумя указателями (№2)
    int massiv[] = { 12, 13, 14, 15, 16 , 17 };

    cout << "Сумма данного (massiv) массива равна:  " << summ(begin(massiv), end(massiv)) << endl;

    int a = 17;
    int b = 7;

    cout << endl;
    cout << "Разность чисел a и b: " << difference(a, b) << endl;
    cout << "Сумма чисел a и b: " << addition(a, b) << endl;

    //проверка работы функции и вызов этой же функции по указателю (№6)
    cout << "\nПроверка работы функции-указателя:\n" << endl;
    operation('+');
    int (*test)(int a, int b);
    test = addition;
    cout << "Вызов функции по указателю: " << test << endl;
    operation('-');
    test = difference;
    cout << "Вызов функции по указателю: " << test << endl;

    //динамический указатель типа float
    float* point = new float(17.17);
    cout << "\nВывод динамического указателя: " << *point << endl;

    //удаление динамического указателя через delete
    delete point;
}   

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
