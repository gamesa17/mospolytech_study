#pragma once

#include <vector>
#include "Weapon.h"

//создание шаблона класса, отвечающего за хранение оржия в правой или левой руке (№9)
template<class WeaponClass>
class HandedWeapon
{
private:
    WeaponClass* left;
    WeaponClass* right;
    WeaponClass* back;

    vector<WeaponClass*> weapons;

public:
    //создание конструктора, геттера и сеттера для обоих переменных (№10)
    HandedWeapon() : left(nullptr), right(nullptr) {};
    HandedWeapon(WeaponClass& weapon) : HandedWeapon() {
        this->take(&weapon);
    }

    WeaponClass* drop() {
        if (weapons.size() > 0) {
            WeaponClass* lastWeapon = this->weapons[this->weapons.size() - 1];

            if (lastWeapon->getType() == WeaponType::ONEHANDED) {
                if (this->left == lastWeapon) {
                    this->left = nullptr;
                }
                else {
                    this->right = nullptr;
                }
            }
            else if (lastWeapon->getType() == WeaponType::TWOHANDED) {
                this->left = nullptr;
                this->right = nullptr;
            }
            else if (lastWeapon->getType() == WeaponType::BOW) {
                this->left = nullptr;
                this->right = nullptr;
                this->back = nullptr;
            }
            else if (lastWeapon->getType() == WeaponType::CROSSBOW) {
                this->left = nullptr;
                this->right = nullptr;
                this->back = nullptr;
            }

            return lastWeapon;
        }

        return nullptr;
    };

    void take(WeaponClass* weapon) {
        this->weapons.push_back(weapon);

        if (weapon->getType() == WeaponType::ONEHANDED) {
            this->left = weapon;
        }
        else if (weapon->getType() == WeaponType::TWOHANDED) {
            this->left = weapon;
            this->right = weapon;
        }
        else if (weapon->getType() == WeaponType::BOW) {
            this->left = weapon;
            this->right = weapon;
            this->back = weapon;
        }
        else if (weapon->getType() == WeaponType::CROSSBOW) {
            this->left = weapon;
            this->right = weapon;
            this->back = weapon;
        }
    }
};