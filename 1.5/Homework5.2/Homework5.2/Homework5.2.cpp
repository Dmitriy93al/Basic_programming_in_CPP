#include <iostream>
#include <string>

#include "counter.h"

int main(int argc, char** agv)
{
    setlocale(LC_ALL, "Rus");

    int x = 1;
    std::string choose;
    std::string action;
    int count;

    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> choose;

    if (choose == "да") {
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> count;
        Counter counter(count);
    }
    if ((choose == "нет")) {
        Counter counter;
    }
    while (x == 1)
    {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";

        std::cin >> action;
        Counter act(count);

        if (action == "+")
        {
            act.plus(count);
        }
        if (action == "-")
        {
            act.minus(count);
        }
        if (action == "=")
        {
            act.print(count);
        }
        if (action == "х") //русская буква х
        {
            x = 0;
            std::cout << "До свидания!";
        }
    }

    return 0;
};
