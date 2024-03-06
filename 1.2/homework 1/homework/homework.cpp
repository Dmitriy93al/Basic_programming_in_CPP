#include <iostream>

class Calculator
{
	private:

	double num1 = 1.0;
	double num2 = 1.0;

	public:
        double add() {
            return (num1 + num2);
        }
        double subtract_1_2() {
            return (num1 - num2);
        }
        double subtract_2_1() {
            return (num2 - num1);
        }
        double multiply() {
            return (num1 * num2);
        }
        double divide_1_2() {
            return (num1 / num2);
        }
        double divide_2_1() {
            return (num2 / num1);
        }
        bool set_num1(double num1) {
            if (num1 != 0) {
                this->num1 = num1;
                return true;
            }
            else
                return false;
        }
        bool set_num2(double num2) {
            if (num2 != 0) {
                this->num2 = num2;
                return true;
            }
            else
                return false;
        }
        Calculator() { }

};
/*
Нужно дополнить методы set_num1 и set_num2. В коде set_num1 нужно проверять передаваемое значение, 
и если оно не равно 0, нужно присваивать это значение в this->num1 и возвращать true. 
Если оно равно 0 - то нужно не ставить это зачение в this->num1 и возвращать false. 
Сейчас вы делаете проверку, но не кладете значения в this->num1. Аналогичное замечание к set_num2.
*/

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Rus");

	double num1, num2;
	Calculator calc;

	do {
		std::cout << "Введите num1:";
		std::cin >> num1;
		if (!calc.set_num1(num1)) {
			std::cout << "Неверный ввод!" << std::endl;
		}
	} while (!calc.set_num1(num1));

	do {
		std::cout << "Введите num2:";
		std::cin >> num2;
		if (!calc.set_num2(num2)) {
			std::cout << "Неверный ввод!" << std::endl;
		}
	} while (!calc.set_num2(num2));

	std::cout << "num1 + num2 = " << calc.add() << std::endl;
	std::cout << "num1 - num2 = " << calc.subtract_1_2() << std::endl;
	std::cout << "num2 - num1 = " << calc.subtract_2_1() << std::endl;
	std::cout << "num1 * num2 = " << calc.multiply() << std::endl;
	std::cout << "num1 / num2 = " << calc.divide_1_2() << std::endl;
	std::cout << "num2 / num1 = " << calc.divide_2_1() << std::endl;

	return 0;
}