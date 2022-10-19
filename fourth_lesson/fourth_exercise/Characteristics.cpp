#include "WeaponHead.h"
#include "Characterisctics.h"

Characteristics::Characteristics(float strenght) : strenght(strenght) {}

//создание в классе characteristics функции getdamage
float Characteristics::getDamage(Weapon& weapon)
{
	return this->strenght + weapon.damage;
};