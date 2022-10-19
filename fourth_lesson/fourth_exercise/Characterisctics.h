#pragma once

class Weapon;

//создание класса characteristics, имеющего одно поле - силу
class Characteristics
{
private:
	float strenght;

public:
	Characteristics(float);

//создание в классе characteristics функции getdamage
public:
	float getDamage(Weapon&);
};
