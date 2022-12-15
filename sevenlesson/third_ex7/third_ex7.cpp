// third_ex7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <cmath>
#include <fstream>
#include <string>
#include <algorithm>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "rus");

	ofstream output;
	output.open("output.txt");
	if (output.is_open())
	{
		output << "Начало работы программы...\n" << endl;
	}

	int r;
	double s;
	string text;
	string getcontent;

	//ввод радиуса окружности пользователем (№1)
	cout << "Введите радиус окружности: " << endl;
	cin >> r;
	output << "Введенный пользователем радиус окружности: " << r<<endl;

	//вывод в консоль длины окружности и округление его до 3 знаков после запятой (№2) и (№3)
	s = round((2 * M_PI * r)*1000)/1000;
	cout <<"\nДлина окружности = " << s << endl;
	output << "Вычисленная длина окружности для данного радиуса: "<<s<<endl;
	output.close();

	//ввод пользователем строки (№4)
	cout << "Введите произвольную строку: " << endl;
	cin >> text;
	getline(cin, text);


	//запись полученного текста в конец текстового файла (№5)
	output.open("output.txt", ios::app);
	output << "Введенный пользователем текст: \n" << text << endl;
	while (true)
	{	
		cout << "Введите произвольную строку ещё раз: " << endl;
		getline(cin, text);

		//выход из программы с помощью exit (№8)
		if (text == "exit")
		{
			output.close();
			break;
		}

		//чтение содержимого файла с помощью read (№6)
		if (text == "read")
		{
			ifstream openfile("output.txt");
			cout << "\nВывод всего содержимого файла: " << endl;
			while (getline(openfile, getcontent))
			{
				cout << getcontent << endl;
			}
			openfile.close();
			continue;
		}

		//удаление всего содержимого из файла с помощью erase (№7)
		if (text == "erase")
		{
			ofstream erase("output.txt", ios::trunc);
			erase.close();
			continue;
		}
		output << text<<endl;
	}

	//вывод содержимого файла с помощью read (№6)

	output.close();
	
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
