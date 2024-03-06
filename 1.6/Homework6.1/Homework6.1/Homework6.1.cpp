#include <iostream>

#define MODE 1
#ifndef MODE

#error "You should difene MODE"
#endif 

#if MODE == 1
#define add(a , b) ((a) + (b))
#endif 

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Rus");

#if MODE == 0

	std::cout << "Работаю в боевом режиме" << std::endl;

#elif MODE == 1

	std::cout << "Работаю в боевом режиме" << std::endl;
	int num_1;
	int num_2;
	std::cout << "Введите число 1: ";
	std::cin >> num_1;
	std::cout << "Введите число 2: ";
	std::cin >> num_2;

	std::cout << "Результат сложения: " << add(num_1, num_2);
#else

	std::cout << "Unknown mode. Shutdown" << std::endl;

#endif

	return 0;
}