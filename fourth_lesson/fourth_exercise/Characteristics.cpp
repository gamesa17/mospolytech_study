#include "WeaponHead.h"
#include "Characterisctics.h"

Characteristics::Characteristics(float strenght) : strenght(strenght) {}

//�������� � ������ characteristics ������� getdamage
float Characteristics::getDamage(Weapon& weapon)
{
	return this->strenght + weapon.damage;
};