#include <iostream>
#include <string>

class Counter {
private:
    int startCounter;

public:
    Counter(int count) {
        this->startCounter = count;
    }

    Counter() {
        this->startCounter = 1;
    }


    void plus(int count) {
        ++count;
    };

    void minus(int count) {
        --count;
    };

    void print(int count) {
        std::cout << count << std::endl;
    };

};

int main() 
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
}

