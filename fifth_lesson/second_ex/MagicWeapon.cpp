#include "MagicWeapon.h"

MagicWeapon:: MagicWeapon(): Weapon(), addDamage(0) {}

MagicWeapon::MagicWeapon(string title, float damage, float addDamage, float weight, WeaponType weapontype) : Weapon(title, damage, weight, weapontype), addDamage(addDamage) {}

MagicWeapon::~MagicWeapon()
{
	cout << *this << " было удалено." << endl;
}

float MagicWeapon::getaddDamage()
{
	return this->addDamage;
}

//переопределение метода в дочернем классе
float MagicWeapon::getallDamage()
{
	return this->getDamage() + this->getaddDamage();
}

ostream& operator<<(ostream& output, MagicWeapon& weapon)
{
	output << weapon.getweapontypeTitle() << "  магическое оружие: \"" << weapon.getTitle() << "\": Наносимый урон = " << weapon.getDamage() <<", дополнительный магический урон:" << weapon.getaddDamage() << ", Вес оружия = " << weapon.getWeight();

	return output;
}