#pragma once

#include <string>
#include <iostream>

using namespace std;

class Weapon
{
    //сделайте все поля в классе оружия закрытми (#1)
private:
    string title;
    float damage;
    float weight;

    //сделать класс characteristics дружественным для класса weapon
    friend class Characteristics;

public:
    Weapon();

    Weapon(string, float, float);

    friend ostream& operator<<(ostream&, Weapon&);

public:
    ~Weapon();

public:
    //добавление get методов для  всех полей (#2)
    string getTitle();

    float getWeight();

    float getDamage();

public:
    //добавление set метода для наносимого урона
    void setDamage(float);

public:
    bool takeThis(float);

    float whatTheSum(float);

    float whatTheSum(Weapon&);
};