#include <iostream>
#include <Windows.h>
#include <string>
#include "Leaver.h"

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);

    std::string name, srtoka;
    std::cout << "¬ведите им€: ";

    std::cin >> name;

    lib::Leaver z;
    srtoka = z.leave(name);

    std::cout << srtoka;

    system("pause");

    return 0;
}