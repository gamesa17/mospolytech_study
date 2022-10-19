#pragma once

//создание класса MyMath с 4 статическими методами (#9)
class MyMath
{
public:
	//создание поля, в котором будет храниться количество вызовов статических методов (#10)
	static int numberofcalls;


	static int add(int, int);
	static int sub(int, int);
	static int mult(int, int);
	static int div(int, int);
};
