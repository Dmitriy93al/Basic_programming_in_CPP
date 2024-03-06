#include <iostream>
#include <string>
#include <windows.h>

#include "Leaver.h"

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string name, srtoka;
    std::cout << "Введите имя: ";

    std::cin >> name;

    lib::Leaver x;
    srtoka = x.leaver(name);

    std::cout << srtoka;

    system("pause");

    return 0;
}
