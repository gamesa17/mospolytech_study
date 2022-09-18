// second_exercise.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main()
{
    //подключение русского языка
    setlocale(LC_ALL, "rus");

    //integer type, float type, unsigned short type
    int number = 150;
    float decimal = 15.933;
    unsigned short min_memory = 250;

    cout << "Формат вывода переменых: \"имя переменной\" = \"значение\":\n"<< endl;

    //вывод имени переменной и ёё значения
    cout << "number (integer type) = " << number << endl;
    cout << "decimal (float type) = " << decimal << endl;
    cout << "min_memory (unsigned short) = " << min_memory << endl;

    //вводим наши данные о рождении
    int day = 14;
    string month = "Февраль";
    int year = 2003;
    //склоняем месяц рождения :)
    size_t start = 0, length = 6;
    string month_correct = month.substr(start, length);
    //выводим информацию о нашем рождении
    cout << "\nВывод даты рождения со склонением месяца:\n" << endl;
    cout << "Я родился " << day<<" "<<month_correct <<"я "<<year<<" года.\n"<< endl;

    //вводим переменные 2,3 и WINDOWS
    const float twopointthree = 2.3;
    const string windows = "WINDOWS";
    cout << "Число 2,3 и строка \"WINDOWS\":\n" << endl;
    //выводим эти 2 переменные 
    cout << twopointthree << " " << windows << endl;

    cout << "\nКонец работы программы." << endl;
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
