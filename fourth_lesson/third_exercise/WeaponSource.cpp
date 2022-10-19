#include "WeaponHead.h"

Weapon::Weapon() :Weapon("Без названия", 0, 0) {}

Weapon::Weapon(string title, float damage, float weight) : title(title), damage(damage), weight(weight) {}


Weapon:: ~Weapon()
{
	cout << endl;
	cout << *this << " Было удалено." << endl;
}

ostream& operator<<(ostream& output, Weapon& weapon)
{
	output << "Оружие: \"" << weapon.title << "\": Наносимый урон = " << weapon.damage << ", Вес оружия = " << weapon.weight;

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