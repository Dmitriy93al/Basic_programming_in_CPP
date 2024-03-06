#include <iostream>
#include <string>
#include <Windows.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string name;

	std::cout << "Введите имя: " << std::endl;
	std::cin >> name;

	std::cout << "Здравствуйте, " << name << "!" << std::endl;

	system("pause");
	return 0;
}