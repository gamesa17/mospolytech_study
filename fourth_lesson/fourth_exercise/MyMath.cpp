#include "MyMath.h"

int MyMath::numberofcalls = 0;

int MyMath::add(int number1, int number2) {
	//создание инкремент созданной статической переменной (#11)
	MyMath::numberofcalls += 1;

	return number1 + number2;
}

int MyMath::sub(int number1, int number2) {
	//создание инкремент созданной статической переменной (#11)
	MyMath::numberofcalls += 1;

	return number1 - number2;
}

int MyMath::mult(int number1, int number2) {
	//создание инкремент созданной статической переменной (#11)
	MyMath::numberofcalls += 1;

	return number1*number2;
}

int MyMath::div(int number1, int number2) {
	//создание инкремент созданной статической переменной (#11)
	MyMath::numberofcalls += 1;

	return number1/number2;
}