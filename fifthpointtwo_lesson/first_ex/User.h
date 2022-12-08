#pragma once

#include <iostream>
#include <string>

using namespace std;


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

	
	friend ostream& operator<<(ostream&, User&);
};