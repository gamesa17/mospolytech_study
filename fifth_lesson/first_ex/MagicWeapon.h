#pragma once

#include "Weapon.h"

//�������� ��������� ������ �� ������ ������ (�7)
class MagicWeapon: public Weapon
{
	//���������� � ��������� ����� private-����, ����������� �� �������������� ���� (�8)
private:
	float addDamage;

public:
	//���������� ������������ � ����������� � ��� (�9)
	MagicWeapon();
	MagicWeapon(string, float, float, float, WeaponType);

	~MagicWeapon();

	//�������� ������� ��� ���������� ���� (�10)
	float getaddDamage();

	friend ostream& operator<<(ostream&, MagicWeapon&);

};