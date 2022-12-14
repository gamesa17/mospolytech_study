// second_excersice.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

//создание классса оружия (название, наносимый урон, вес) (№1)
class Weapon
{
private:
    string title;
    float damage;
    float weight;

public:
    Weapon(string title, float damage, float weight) : title(title), damage(damage), weight(weight) {}

    Weapon() : Weapon("Без названия", 0, 0) {}

    friend ostream& operator<<(ostream& output, Weapon& weapon)
    {
        output << "Оружие: \"" << weapon.title << "\": Наносимый урон = " << weapon.damage << ", Вес оружия = " << weapon.weight;

        return output;
    }

    //создание деструктора для класса оружия и вывод в консоль сообщения об удалении (№1)
    ~Weapon()
    {
        cout << endl;
        cout << *this << " Было удалено." << endl;
    }

    //метод возможности поднять оружие (№5)
    bool takeThis(float maxWeight) {
        return maxWeight >= this->weight;
    }

    //перегрузка предыдущего метода (№7)
    float whatTheSum(float loadWeight)
    {
        return this->weight + loadWeight;
    }

    //метод возвращения текущего веса и поднятого объекта (№6)
    float whatTheSum(Weapon& weapon)
    {
        //перегрузка метода класса (№8)
        return whatTheSum(weapon.weight);
    }
};

int main()
{
    setlocale(LC_ALL, "rus");

    //создание объекта оружия и вывод его переменных в консоль (№2)
    Weapon M4A1S("M4A1S", 20, 20);
    cout << M4A1S << endl;

    //создание динамического объекта оружия и вывод его переменных в консоль (№3)
    Weapon* AWP = new Weapon("AWP", 100, 100);
    cout << *AWP << endl;

    //проверка (№9)
    cout << "\nМожете ли вы поднять \"M4A1S\" весом 15 КГ, если ваш рюзкак может выдержать лишь 6 КГ?" << (M4A1S.takeThis(6) ? "\n - Да" : "\n - Нет") << endl;
    cout << "\nВы дейсвительно хотите поднять \"M4A1S\" весом 20 КГ, ведь ваш портфель уже нагружен на 2 КГ?\nТеперь ваш портфель нагружен на " << M4A1S.whatTheSum(2) << " КГ" << endl;
    cout << "\nВы подобрали новое \"AWP\" весом 100 КГ к запасу уже существующей \"M4A1S\" весом 20 КГ.\nТеперь ваш портфель нагружен на " << M4A1S.whatTheSum(*AWP) << " КГ" << endl;
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