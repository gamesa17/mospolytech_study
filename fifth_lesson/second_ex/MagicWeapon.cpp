#include "MagicWeapon.h"

MagicWeapon:: MagicWeapon(): Weapon(), addDamage(0) {}

MagicWeapon::MagicWeapon(string title, float damage, float addDamage, float weight, WeaponType weapontype) : Weapon(title, damage, weight, weapontype), addDamage(addDamage) {}

MagicWeapon::~MagicWeapon()
{
	cout << *this << " ���� �������." << endl;
}

float MagicWeapon::getaddDamage()
{
	return this->addDamage;
}

//��������������� ������ � �������� ������
float MagicWeapon::getallDamage()
{
	return this->getDamage() + this->getaddDamage();
}

ostream& operator<<(ostream& output, MagicWeapon& weapon)
{
	output << weapon.getweapontypeTitle() << "  ���������� ������: \"" << weapon.getTitle() << "\": ��������� ���� = " << weapon.getDamage() <<", �������������� ���������� ����:" << weapon.getaddDamage() << ", ��� ������ = " << weapon.getWeight();

	return output;
}