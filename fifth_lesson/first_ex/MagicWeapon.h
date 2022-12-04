#pragma once

#include "Weapon.h"

//создание дочернего класса от класса оружи€ (є7)
class MagicWeapon: public Weapon
{
	//добавление в созданный класс private-пол€, отвечающего за дополнительный урон (є8)
private:
	float addDamage;

public:
	//объ€вление конструктора с параметрами и без (є9)
	MagicWeapon();
	MagicWeapon(string, float, float, float, WeaponType);

	~MagicWeapon();

	//создание геттера дл€ созданного пол€ (є10)
	float getaddDamage();

	friend ostream& operator<<(ostream&, MagicWeapon&);

};