#include "DisposableWeapon.h"

DisposableWeapon::DisposableWeapon() : Weapon(), used(false) {}

DisposableWeapon::DisposableWeapon(string title, float weight, float damage, WeaponType weapontype) : Weapon(title, weight, damage, weapontype), used(false) {}

//(№7)
void DisposableWeapon::attack()
{
	if (this->used)
	{
		cout<<"Оружие уже было использовано." << endl;
	}

	else
	{
		this->used = true;
		cout<<"Атакуем одноразовым оружием." << endl;
	}
}