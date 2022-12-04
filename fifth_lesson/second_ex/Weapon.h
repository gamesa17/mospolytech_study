#pragma once


#include <iostream>
#include <string>

using namespace std;

//�������� ������������ ����� ������ (�1)
enum class WeaponType : int 
{
	ONEHANDED,
	TWOHANDED,
	BOW,
	CROSSBOW
};

class Weapon
{
private:
	float damage;
	float weight;
	string title;

	//���������� � ����� ������ �������� � ����� ������������ (�2)
	WeaponType weapontype;

public:
	Weapon();

	//��������� ������������ ������ (�2)
	Weapon(string, float, float, WeaponType);

public:
	~Weapon();

public:
	//�������� ������� ��� WeaponType (�2)
	WeaponType getType();

	string getTitle();
	float getWeight();
	float getDamage();

	//�������� ������, ������������� ���� �� ������
	virtual float getallDamage();

public:
	void setDamage(float);

public:
	friend ostream& operator<<(ostream&, Weapon&);

	//��������������� ��������� > � < ��� �������� ������ �� ����� (�4)
	bool operator>(Weapon&);
	bool operator<(Weapon&);

public:
	bool takeThis(float);
	float whatTheSum(float);
	float whatTheSum(Weapon&);
	string getweapontypeTitle();
};