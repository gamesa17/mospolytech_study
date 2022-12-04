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

ostream& operator<<(ostream& output, MagicWeapon& weapon)
{
	output << weapon.getweapontypeTitle() << "  магическое оружие: \"" << weapon.getTitle() << "\": Ќаносимый урон = " << weapon.getDamage() <<", дополнительный магический урон:" << weapon.getaddDamage() << ", ¬ес оружи€ = " << weapon.getWeight();

	return output;
}