// RandBThree.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "RBThree.h"

int main()
{
	RBThree three;
	int number = 0;
	int data;
	setlocale(LC_ALL, "rus");

	std::cout << "Добро пожаловать! Выберите операцию и введите её заглавный номер:" << std::endl;

	while (number != 7)
	{
		std::cout << "\n1.Ввод узла.\n2.Удаление узла.\n3.Вывод красно-черного дерева.\n4.Pre-Order Traversal.\n5.In-Order Traversal.\n6.Post-Order Traversal\n7.Выход из программы." << std::endl;
		std::cin >> number;

		switch (number)
		{
		case 1:
			std::cout << "Введите ключ узла для вставки: " << std::endl;
			std::cin >> data;
			three.insert(data);
			break;
		case 2:
			std::cout << "Введите ключ узла для удаления: " << std::endl;
			std::cin >> data;
			three.deleteNode(data);
			break;
		case 3:
			std::cout << "Вот так выглядит отсортированное созданное вами дерево: \n" << std::endl;
			three.prettyPrint();
			break;
		case 4:
			three.preorder();
			break;
		case 5:
			three.inorder();
			break;
		case 6: 
			three.postorder();
		}
	}
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
