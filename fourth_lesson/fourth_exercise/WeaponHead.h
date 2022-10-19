#pragma once

#include <string>
#include <iostream>

using namespace std;

class Weapon
{
    //�������� ��� ���� � ������ ������ �������� (#1)
private:
    string title;
    float damage;
    float weight;

    //������� ����� characteristics ������������� ��� ������ weapon
    friend class Characteristics;

public:
    Weapon();

    Weapon(string, float, float);

    friend ostream& operator<<(ostream&, Weapon&);

public:
    ~Weapon();

public:
    //���������� get ������� ���  ���� ����� (#2)
    string getTitle();

    float getWeight();

    float getDamage();

public:
    //���������� set ������ ��� ���������� �����
    void setDamage(float);

public:
    bool takeThis(float);

    float whatTheSum(float);

    float whatTheSum(Weapon&);
};