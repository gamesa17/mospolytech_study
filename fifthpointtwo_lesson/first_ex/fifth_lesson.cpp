// fifth_lesson.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "Weapon.h"
#include "MagicWeapon.h"
#include "User.h"
#include "DisposableWeapon.h"
#include "HandedWeapon.h"
#include <iostream>

using namespace std;


int main()
{
    setlocale(LC_ALL, "rus");

    //создание экземпляра магического оружия и вызов метода Attack у него (№4)
    MagicWeapon Maelstorm("Maelstorm", 24, 3.3, 7, WeaponType::ONEHANDED);
    cout << Maelstorm << endl;
    Maelstorm.attack();

    cout << endl;

    //создание экземпляра класса одноразового оружия и вызов метода Attack дважды (№8)
    DisposableWeapon Desolator("Desolator", 20, 500, WeaponType::ONEHANDED);
    cout << Desolator << endl;

    Desolator.attack();
    Desolator.attack();

    //проверка работы шаблона (№11)
    HandedWeapon<MagicWeapon> HandedMagicWeapon(Maelstorm);
    HandedWeapon<DisposableWeapon> HandedDisposableWeapon(Desolator);

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
