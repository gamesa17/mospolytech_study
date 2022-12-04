#pragma once


#include <iostream>
#include <string>

using namespace std;

//создание перечисления типов оружия (№1)
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

	//добавление в класс оружия свойства с типом перечисления (№2)
	WeaponType weapontype;

public:
	Weapon();

	//изменение конструктора класса (№2)
	Weapon(string, float, float, WeaponType);

public:
	~Weapon();

public:
	//создание геттера для WeaponType (№2)
	WeaponType getType();

	string getTitle();
	float getWeight();
	float getDamage();

	//создание метода, возвращающего урон от оружия
	virtual float getallDamage();

public:
	void setDamage(float);

public:
	friend ostream& operator<<(ostream&, Weapon&);

	//переопределение оператора > и < для савнения оружия по урону (№4)
	bool operator>(Weapon&);
	bool operator<(Weapon&);

public:
	bool takeThis(float);
	float whatTheSum(float);
	float whatTheSum(Weapon&);
	string getweapontypeTitle();
};