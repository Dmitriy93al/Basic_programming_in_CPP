#include <iostream>

enum class mounth { January = 1, February, March, April, May, June, July, August, September, October, November, December};

int main(int argc, char** atgv) {
    
    setlocale(LC_ALL, "Russian");
    
    int x;

    do {

        std::cout << "Введите номер месяца: ";
        std::cin >> x;

        mounth m = static_cast<mounth>(x);

        switch (m) {
        case mounth::January:
            std::cout << "Январь" << std::endl;
            break;

        case mounth::February:
            std::cout << "Февраль" << std::endl;
            break;

        case mounth::March:
            std::cout << "Март" << std::endl;
            break;

        case mounth::April:
            std::cout << "Апрель" << std::endl;
            break;

        case mounth::May:
            std::cout << "Май" << std::endl;
            break;

        case mounth::June:
            std::cout << "Июнь" << std::endl;
            break;

        case mounth::July:
            std::cout << "Июль" << std::endl;
            break;

        case mounth::August:
            std::cout << "Август" << std::endl;
            break;

        case mounth::September:
            std::cout << "Сентябрь" << std::endl;
            break;

        case mounth::October:
            std::cout << "Октябрь" << std::endl;
            break;

        case mounth::November:
            std::cout << "Ноябрь" << std::endl;
            break;

        case mounth::December:
            std::cout << "Декабрь" << std::endl;
            break;
        }

    } while (x > 0 && x < 13);

    if (x > 12 || x < 0) {
        std::cout << "Не правильный номер";
    }
    if (x == 0) {
        std::cout << "До свидания!";
    }
return 0;
}
