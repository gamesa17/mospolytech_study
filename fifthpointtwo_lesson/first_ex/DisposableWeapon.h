#pragma once

#include "Weapon.h"

//�������� ��� ������ ��������� ������ �� ������ (�5)

class DisposableWeapon : public Weapon
{
	//�������� ����-����� (�7)
	bool used;

public:
	DisposableWeapon();
	DisposableWeapon(string, float, float, WeaponType);

	//(�7)
	void attack();

};