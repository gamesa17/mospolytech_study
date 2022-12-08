#pragma once

#include "Weapon.h"

//создание ещё одного дочернего класса от оружия (№5)

class DisposableWeapon : public Weapon
{
	//создание поле-флага (№7)
	bool used;

public:
	DisposableWeapon();
	DisposableWeapon(string, float, float, WeaponType);

	//(№7)
	void attack();

};