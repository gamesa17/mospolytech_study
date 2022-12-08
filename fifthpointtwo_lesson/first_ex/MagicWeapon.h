#pragma once

#include "Weapon.h"

class MagicWeapon: public Weapon
{
private:
	float addDamage;

public:
	MagicWeapon();
	MagicWeapon(string, float, float, float, WeaponType);

	~MagicWeapon();

	float getaddDamage();

	virtual float getallDamage();

	friend ostream& operator<<(ostream&, MagicWeapon&);

	//���������� ������� � ������ ����������� ������ (�2)
	void attack();

};