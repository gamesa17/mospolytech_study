#pragma once


#include <iostream>
#include <string>

using namespace std;

//создание перечислени€ типов оружи€ (є1)
enum class WeaponType : int 
{
	ONEHANDED,
	TWOHANDED,
	BOW,
	CROSSBOW
};

class Weapon
{
private:
	float damage;
	float weight;
	string title;

	//добавление в класс оружи€ свойства с типом перечислени€ (є2)
	WeaponType weapontype;

public:
	Weapon();

	//изменение конструктора класса (є2)
	Weapon(string, float, float, WeaponType);

public:
	~Weapon();

public:
	//создание геттера дл€ WeaponType (є2)
	WeaponType getType();

	string getTitle();
	float getWeight();
	float getDamage();

	//создание метода, возвращающего урон от оружи€
	virtual float getallDamage();

public:
	void setDamage(float);

public:
	friend ostream& operator<<(ostream&, Weapon&);

	//переопределение оператора > и < дл€ савнени€ оружи€ по урону (є4)
	bool operator>(Weapon&);
	bool operator<(Weapon&);

public:
	bool takeThis(float);
	float whatTheSum(float);
	float whatTheSum(Weapon&);
	string getweapontypeTitle();

	//сделать класс оружи€ абстрактным, объ€вив чисто виртуальную функцию Attack
	virtual void attack() = 0;
};