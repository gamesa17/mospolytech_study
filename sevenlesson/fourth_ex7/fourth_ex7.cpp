// fourth_ex7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <map>

using namespace std;

//создание класса Settings и добавление в него поля типа Map (№9)
class Settings
{
    //все поля статические (№14)
private:
    //map <string, string> MyMap;
    static map <string, string> MyMap;

public:

    //конструктор
    Settings(string key, string value) 
    {
        MyMap[key] = value;
    }

    //деструктор
    ~Settings() { cout << "\nSettings было удалено." << endl; }

    //добавление в класс функцию Add, принимающую две строки (№10)
    static void add(string key, string value)
    {
        MyMap.insert(make_pair(key, value));
    }

    //добавление в класс функции Get, принимающую строку и возвращающая соотвествующее значение (№11)
    static string get(string key)
    {
        map<string, string>::iterator i;
        i = MyMap.find(key);
        return i->second;
    }



    //добавление в класс функции Print, которая выводит содержимое map в консоль (№12)
    static void print()
    {
        cout << "Вывод всего содержимого Map: " << endl;
        for (auto i = MyMap.begin(); i != MyMap.end(); i++) {

            std::cout << i->first << " = " << i->second << "\n";

        }
    }


};

//опредение члена MyMap через оператор разрешения видимости (№14)
map <string, string> Settings::MyMap;

//создание функции, которая принимает вектор (№3)
void print(vector<float>&vect)
{
    cout << "Вывод всех значений вектора: "<<endl;
    for (vector<float>::iterator i = vect.begin(); i != vect.end(); i++)
        cout << *i << endl;
}

int main()
{

    setlocale(LC_ALL, "rus");

    //создание пустого вектора типа float и добавление в него 5 элементов (№1) & (№2)
    vector < float > dmass =  {0.5, 123.2, 1.1, 2.2, 0.3};

    //вызов созданной функции (№4)
    print(dmass);

    //вставка ещё одного элементу между 3 и 4 элементами (№5)
    dmass.insert(dmass.begin() + 3, 5.5);

    //вывод вектора в консоль (№6)
    print(dmass);

    //удаление последнего элемента вектора (№7)
    dmass.erase(dmass.end()-1);

    //вывод вектора в консоль (№8)
    print(dmass);
    
    //создание экземпляра класса и проверка всех методов (№13)
    /*Settings test("1_key", "1_value");
    test.add("2_key", "2_value");
    test.add("3_key", "3_value");
    test.print();
    cout<<"Значение, соотвествующее \"3_key\": " << test.get("3_key");*/

    //новая проверка класса со static полями (№15)
    Settings test_static("static_key", "static_value");
    test_static.add("static_key1", "static_value1");
    test_static.add("static_key2", "static_value2");
    test_static.print();
    cout << "Значение, соотвествующее \"static_key1\": " << test_static.get("static_key1");
    
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
