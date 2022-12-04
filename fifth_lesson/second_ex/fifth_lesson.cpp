// fifth_lesson.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "Weapon.h"
#include "MagicWeapon.h"
#include "User.h"
#include <iostream>

using namespace std;


int main()
{
    setlocale(LC_ALL, "rus");


    Weapon AWP("AWP", 100, 500, WeaponType::TWOHANDED);
    Weapon BOW("Лук", 100, 500, WeaponType::BOW);
    Weapon CROSSBOW("Арбалет", 100, 500, WeaponType::CROSSBOW);
    Weapon GLOCK("Glock", 100, 500, WeaponType::ONEHANDED);


    //вывод типа оружия с помощью if (№3)
    cout << "Вывод типа оружия с помощью 'Weapon::getweapontypeTitle': " << endl;
    cout << AWP << endl;
    cout << BOW << endl;
    cout << CROSSBOW << endl;
    cout << GLOCK << endl;

    //тест созданной структуры игрока (№6)
    User Edik("Edik", "ProTankist3000");
    cout << "\n" << Edik << endl;

    //проверка, что объект магического оружия возвращает урон базового и дополнительного урона (№3)
    MagicWeapon Maelstorm("Maelstorm", 24, 3.3, 7, WeaponType::ONEHANDED);
    cout << "\nМожете ли вы поднять \"Maelstorm\" весом 7 КГ, если ваш рюзкак может выдержать лишь 8 КГ?" << (Maelstorm.takeThis(7) ? "\n - Да" : "\n - Нет") << endl;
    cout << "\nВы дейсвительно хотите поднять \"GLOCK\" весом 500 Г, ведь ваш портфель уже нагружен на 7 КГ?\nТеперь ваш портфель нагружен на " << Maelstorm.whatTheSum(GLOCK.getWeight()/1000) << " КГ\n" << endl;

    cout << Maelstorm << endl;

    //проверка работы операторов > и < (№5)
    cout << "\nMaelstorm > CROSSBOW? " << (Maelstorm > CROSSBOW ? "\n - Да" : "\n - Нет") << endl;
    cout << "\nMaelstorm > BOW? " << (Maelstorm > BOW ? "\n - Да" : "\n - Нет") << endl;
    cout << "\nMaelstorm > GLOCK? " << (Maelstorm > GLOCK ? "\n - Да" : "\n - Нет") << endl;

    cout << endl;

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
