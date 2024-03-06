#include <iostream>
#include <string>

#include "fun.h"

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Rus");

    int x, y, choice;
    bool check = false;
    std::string operation;

    std::cout << "Введите первое число: ";
    std::cin >> x;

    std::cout << "Введите второе число: ";
    std::cin >> y;

    do {
        std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
        std::cin >> choice;

        if (choice <= 0 || choice >= 6) {
            std::cout << "Введено некорректное число!" << std::endl;
        }
        else if (choice >= 1 && choice <= 5) {
            check = true;
        }      
    } while (!check);

    switch (choice)
    {
    case(1): {
        operation = "Плюс";
        break;
    }
    case(2): {
        operation = "Минус";
        break;
    }
    case(3): {
        operation = "Умножить";
        break;
    }
    case(4): {
        operation = "Разделить";
        break;
    }
    case(5): {
        operation = "Возведение в степень";
        break;
    }
    };

    std::cout << x << " " << operation << " " << y << " = ";

    if (choice == 1) {
        std::cout << addition(x, y);
    }
    else if (choice == 2) {
        std::cout << subtraction(x, y);
    }
    else if (choice == 3) {
        std::cout << multiplication(x, y);
    }
    else if (choice == 4) {
        std::cout << division(x, y);
    }
    else if (choice == 5) {
        std::cout << exponentiation(x, y);
    };

    return 0;
};
