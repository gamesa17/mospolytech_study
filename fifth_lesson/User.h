#pragma once

#include <iostream>
#include <string>

using namespace std;

//�������� ��������� ������ (�4)
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

	//�������� ������� � ���������, ������� ������� ��� ������ � ������� (�5)
	friend ostream& operator<<(ostream&, User&);
};