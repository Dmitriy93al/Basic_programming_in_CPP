#include <iostream>
#include <string>

struct data_human
{
	std::string city;
	std::string street;
	int home;
	int apartment;
	int zip;
};

data_human get_print(const std::string& dbinfo) {
	return data_human{ "Санкт-Петербург", "пр-т Луначарского", 16, 29, 6699 };
}

void print(const data_human& info) {
	std::cout << "Город: " << data_human.city << std::endl;
	std::cout << "Улица: " << data_human.street << std::endl;
	std::cout << "Номер дома: " << data_human.home << std::endl;
	std::cout << "Номер квартиры: " << data_human.apartment << std::endl;
	std::cout << "Индекс: " << data_human.zip << std::endl;
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Rus");

	const auto data_human = get_print("db");

	void print(const data_human & info)

	return 0;
}