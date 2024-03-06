#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

class Adress
{
private:
    std::string city;
    std::string street;
    int house;
    int flat;
    std::ostringstream full_adress;

public:
    Adress& operator=(const Adress& other) {
        city = other.city;
        street = other.street;
        house = other.house;
        flat = other.flat;
        return *this;
    }

    std::string get_output_address() {
        full_adress << city << ", " << street << ", " << house << ", " << flat;
        return full_adress.str();
    }

    Adress() {}
    Adress(std::string city, std::string street, unsigned int house, unsigned int flat)
        :city(city), street(street), house(house), flat(flat) {}

};



int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Rus");
   

    int rows;
    std::string city; 
    std::string street;
    unsigned int house; 
    unsigned int flat;

    std::ifstream file("in.txt");

    if (file.is_open())
    {
        std::cout << "Файл открыт!";
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

        std::ofstream outFile("out.txt");

        if (outFile.is_open()) 
        {
            outFile << rows << std::endl;
        }
        else {
            std::cout << "Файл не записан!" << std::endl;
        }
        for (int i = rows - 1; i >= 0; i--) //вывод адреса в обратном порядке.
        {
            outFile << mas[i].get_output_address() << std::endl;

        }

        outFile.close();

        delete[]mas;
    }

    else{
        std::cout << "Файл не открыт!" << std::endl;
    }
    file.close();

return 0;
}