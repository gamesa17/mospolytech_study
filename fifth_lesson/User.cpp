#include "User.h"

int User::lastUserId = 0;

User::User() : User("", "")
{
	this->username = to_string(this -> id);
}

User::User(string username, string password) : username(username), password(password)
{
	User::lastUserId += 1;

	this->id = User::lastUserId;

}

User:: ~User()
{
	cout << *this << " ����� �����." << endl;
}

//�������� ������� � ���������, ������� ������� ��� ������ � ������� (�5)
ostream& operator<<(ostream& output, User& user)
{
	output << "������������������ ����� � Id: " << user.id << " ,���������: " << user.username << " � �������: " << user.password;

	return output;
}