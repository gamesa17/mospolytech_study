#pragma once

class Weapon;

//�������� ������ characteristics, �������� ���� ���� - ����
class Characteristics
{
private:
	float strenght;

public:
	Characteristics(float);

//�������� � ������ characteristics ������� getdamage
public:
	float getDamage(Weapon&);
};
