// sixlesson.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

//
enum class BirthdayExceptionDate : int
{
    UNAVAILABLE,
    NOTCORRECT,
    NEGATIVE,
};

//создание класса исключений (№8)
class BirthdayException : public std::exception
{
private:
    BirthdayExceptionDate date;

public:
    BirthdayException(BirthdayExceptionDate date) : date(date) {}

    const char* what() const throw() override
    {
        if (date == BirthdayExceptionDate::UNAVAILABLE)
        {
            return "Что-то пошло не так, вы не настолько старый...";
        }

        if (date == BirthdayExceptionDate::NOTCORRECT)
        {
            return "Вы не можете заглянуть в будущее...";
        }

        if (date == BirthdayExceptionDate::NEGATIVE)
        {
            return "Тогда ещё не существовала цивилизация...";
        }
    }
};


int main()
{
    try
    {
        int number;
        setlocale(LC_ALL, "rus");

        //ввод 1,2 или 3 и вывод в текстовом виде (№1)
        cout << "Введите числа 1, 2 или ...3" << endl;
        cin >> number;

        //обработка вариантов и исключений (№2)
        switch (number)
        {
        case 1:
            cout << "Один \n";
            break;
        case 2:
            cout << "Два \n";
            break;
        case 3:
            cout << "Три \n";
            break;

        default:
            throw "Некорректное значение.";
        }
    }
    catch(const char* error)
    {
        cout << error<<endl;
    }

    try
    {
        //ввод года своего рождения (№3)
        int birthDate;

        cout << "Введите дату своего рождения" << endl;
        cin >> birthDate;

        //выброс исключения и вывод в catch (№4)
        if (birthDate >= 0 && birthDate < 1850)
        {
            throw BirthdayException(BirthdayExceptionDate::UNAVAILABLE);
        }

        //исключение вы ещё не родились (№5)
        if (birthDate > 2022)
        {
            throw BirthdayException(BirthdayExceptionDate::NOTCORRECT);
        }

        //исключение отрицательное число (№6)
        if (birthDate < 0)
        {
            throw BirthdayException(BirthdayExceptionDate::NEGATIVE);
        }

        //вывод в консоль "спасибо!"
        cout << "Спасибо!" << endl;
    }
    catch (BirthdayException& error)
    {
        cout << error.what();

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
