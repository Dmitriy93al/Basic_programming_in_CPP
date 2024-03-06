#include <iostream>
#include <string>
#include <exception>
#include <Windows.h>

int function(std::string word, int forbidden_length)
{
    if (forbidden_length == word.length())
    {
        throw std::length_error("Вы ввели слово запретной длины! До свидания");
    };

    return static_cast<int>(word.length());
};

int main() 
{
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int length = 0;
    int forbidden_length = 0;
    std::string word;
    bool check_length = false;

    do
    {
        std::cout << "Введите запретную длину: ";
        std::cin >> forbidden_length;

        if (forbidden_length > 0)
        {
            check_length = true;
        }

        if (forbidden_length <= 0)
        {
            std::cout << "Неверная длина... Введите новую" << std::endl;
        }

    } while (!check_length);

    try
    {
        do
        {
            std::cout << " Введите слово: ";
            std::cin >> word;

            length = function(word, forbidden_length);

            std::cout << "Длина слова \"" << word << "\" равна " << length;

        } while (forbidden_length != length);
    }
    catch (const std::exception& ex)
    {
        std::cout << std::endl << ex.what() << std::endl;
    }

    return 0;
}