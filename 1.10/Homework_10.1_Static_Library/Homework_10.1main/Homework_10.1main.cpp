#include <iostream>
#include <string>
#include "Greeter.h"
#include <windows.h>

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string name, srtoka;
    std::cout << "Введите имя: ";

    std::cin >> name;

    Lib::Greeter x;
    srtoka = x.greet(name);

    std::cout << srtoka << " !" << std::endl;

    system("pause");

    return 0;
}