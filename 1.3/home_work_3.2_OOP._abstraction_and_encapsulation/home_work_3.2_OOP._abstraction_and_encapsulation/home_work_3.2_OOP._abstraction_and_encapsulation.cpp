#include <fstream>
#include <string>
#include <sstream>
#include <iostream>


class Adress
{
private:
    std::string city;
    std::string street;
    unsigned int house;
    unsigned int flat;
    std::ostringstream full_adress;
public:

    std::string get_city() {
        return city;
    }

    Adress& operator=(const Adress& other) {
        city = other.city;
        street = other.street;
        house = other.house;
        flat = other.flat;
        return *this;
    }

    static void set_convert(Adress& A, Adress& B) {
        std::swap(A.city, B.city);
        std::swap(A.street, B.street);
        std::swap(A.house, B.house);
        std::swap(A.flat, B.flat);
    }

    std::string get_output_address() {
        full_adress << city << ", " << street << ", " << house << ", " << flat;
        return full_adress.str();
    }

    Adress() {}
    Adress(std::string city, std::string street, unsigned int house, unsigned int flat)
        :city(city), street(street), house(house), flat(flat) {}

};



int main()
{
    setlocale(LC_ALL, "Russian");
  
    std::ifstream file("in.txt");
    int rows;
    std::string city;
    std::string street;
    unsigned int house;
    unsigned int flat;

    if (file.is_open())
    {
        bool fileIsOver;
        fileIsOver = file.eof();
        file >> rows;
        Adress* mas = new Adress[rows];

        while (!fileIsOver)
        {
            for (int i = 0; i < rows; i++)
            {
                file >> city >> street >> house >> flat;
                Adress adress(city, street, house, flat);
                mas[i] = adress;
                fileIsOver = file.eof();
            }

            fileIsOver = file.eof();
        }
        for (int j = 0; j < (rows - 1); ++j) {
            for (int i = 0; i < (rows - 1); i++) {
                std::string city1 = mas[i].get_city();
                std::string city2 = mas[i + 1].get_city();
                if (city1 > city2) {
                    mas[i].set_convert(mas[i], mas[i + 1]);
                }
            }
        }
        std::ofstream outFile("out.txt");
        if (outFile.is_open()) {
            outFile << rows << std::endl;
        }
        else {
            std::cout << "Не получилось записать файл!" << std::endl;
        }
        for (int i = 0; i < rows; i++)
        {
            outFile << mas[i].get_output_address() << std::endl;
        }
        outFile.close();
        delete[]mas;
    }
    else
    {
        std::cout << "Не получилось открыть файл!" << std::endl;
    }
    file.close();

    return 0;
}