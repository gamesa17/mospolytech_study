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
	cout << *this << " игрок удалён." << endl;
}

//создание функции в структуре, которая выведет все данные в консоль (№5)
ostream& operator<<(ostream& output, User& user)
{
	output << "Зарегистрированный игрок с Id: " << user.id << " ,никнеймом: " << user.username << " и паролем: " << user.password;

	return output;
}