// first_ex7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    //ввод строки пользователем (№1)
    string name;

    cout<<"" << endl;
    cin >>name;

    //вывод подстроки из строки пользователя (№2)
    cout << "Вывод подстроки от 2-го символа до 4-го: " << name.substr(1, 3) << endl;
    
    //вывод индекса первого вхождения "а" в строку пользователя (№3)
    int counter = name.find("a");

    if (counter >= 0)
    {
        cout << "Первое вхождение \"a\": " << counter + 1<< endl;
    }

    else
    {
        cout << "Символ \"a\" не был найден." << endl;
    }

    return 0;

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
