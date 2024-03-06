#include <iostream>
#include <string>

struct balance
{
	int account;
	std::string FullName;
	int money;
};

void change_balance(balance* new_symm, int new_money)
{
	new_symm -> money = new_money;
}

int main() 
{
	setlocale(LC_ALL, "Rus");

	int x = 0;
	int count;

	balance full;

	std::string name;

	std::cout << "Введите номер счёта: ";
	std::cin >> count;
	full.account = count;

	std::cout << "Введите имя владельца: ";
	std::cin >> name;
	full.FullName = name;

	std::cout << "Введите баланс: ";
	std::cin >> x;
	full.money = x;
	std::cout << std::endl;

	int new_money = 0;
	std::cout << "Введите новый баланс: ";
	std::cin >> new_money;
	std::cout << std::endl;

	change_balance(&full, new_money);

	std::cout << "Ваш счёт: " << full.FullName << ", " << full.account << ", " << full.money;

	return 0;
}

