#pragma once

#include <iostream>
#include <string>

using namespace std;

//создание структуры игрока (№4)
class User
{
private:
	static int lastUserId;
	unsigned int id;
	string username;
	string password;

public:
	User();
	User(string, string);
	~User();

	//создание функции в структуре, которая выведет все данные в консоль (№5)
	friend ostream& operator<<(ostream&, User&);
};