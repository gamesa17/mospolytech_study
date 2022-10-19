#include "WeaponHead.h"

Weapon::Weapon() :Weapon("��� ��������", 0, 0) {}

Weapon::Weapon(string title, float damage, float weight) : title(title), damage(damage), weight(weight) {}


Weapon:: ~Weapon()
{
	cout << endl;
	cout << *this << " ���� �������." << endl;
}

string Weapon:: getTitle()
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

void Weapon:: setDamage(float damage)
{
	this-> damage = damage;
}

ostream& operator<<(ostream& output, Weapon& weapon)
{
	output << "������: \"" << weapon.title << "\": ��������� ���� = " << weapon.damage << ", ��� ������ = " << weapon.weight;

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