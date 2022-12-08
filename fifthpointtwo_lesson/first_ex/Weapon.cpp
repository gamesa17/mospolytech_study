#include "Weapon.h"

Weapon::Weapon() :Weapon("Без названия", 0, 0, WeaponType::TWOHANDED) {}

Weapon::Weapon(string title, float damage, float weight, WeaponType weapontype) : title(title), damage(damage), weight(weight), weapontype(weapontype) {}


Weapon:: ~Weapon()
{
	cout << endl;
	cout << *this << " Было удалено." << endl;
}

string Weapon::getTitle()
{
	return this->title;
}

float Weapon::getDamage()
{
	return this->damage;
}

float Weapon::getWeight()
{
	return this->weight;
}

WeaponType Weapon::getType()
{
	return this->weapontype;
}

float Weapon::getallDamage()
{
	return this->getDamage();
}

void Weapon::setDamage(float damage)
{
	this->damage = damage;
}

ostream& operator<<(ostream& output, Weapon& weapon)
{
	output << weapon.getweapontypeTitle() << " оружие: \"" << weapon.title << "\": Наносимый урон = " << weapon.damage << ", Вес оружия = " << weapon.weight;
	return output;
}

bool Weapon::takeThis(float maxWeight) {
	return maxWeight >= this->weight;
}

float Weapon::whatTheSum(float loadWeight) {
	return this->weight + loadWeight;
}

float Weapon::whatTheSum(Weapon& weapon) {
	return whatTheSum(weapon.weight);
}


bool Weapon:: operator>(Weapon& weapon)
{
	return this->getallDamage() > weapon.getallDamage();
}

bool Weapon:: operator<(Weapon& weapon)
{
	return this->getallDamage() < weapon.getallDamage();
}

string Weapon::getweapontypeTitle()
{
	if (this->weapontype == WeaponType::BOW)
	{
		return "Лук";
	}

	if (this->weapontype == WeaponType::CROSSBOW)
	{
		return "Арбалет";
	}

	if (this->weapontype == WeaponType::ONEHANDED)
	{
		return "Одноручное";
	}

	if (this->weapontype == WeaponType::TWOHANDED)
	{
		return "Двуручное";
	}

	else
	{
		return "Неопазнанный вид оружия";
	}
}
