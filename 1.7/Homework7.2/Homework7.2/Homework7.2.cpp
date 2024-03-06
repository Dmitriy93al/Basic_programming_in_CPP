#include <iostream>
#include <string>
#include <stdexcept>

#include "MyException.h"
#include "print_info.h"

#include "Figure.h"

#include "Triangle.h" //Треугольник
#include "Right_angled_triangle.h" //прямоугольный треугольник
#include "Isosceles_triangle.h" //равнобедренный треугольник
#include "Equilateral_triangle.h" //равносторонний треугольник
#include "Quadrilateral.h" //четырёхугольник
#include "Square.h" //квадрат
#include "Rectangle.h" //прямоугольник
#include "Parallelogram.h" //параллелограмм
#include "Rhomb.h" //rhomb

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
   
    try {
        Triangle triangle(10, 20, 30, 50, 60, 70);
        Triangle* new_triangle = &triangle;
        print_info(new_triangle);
        std::cout << "создан" << std::endl;
    }
    catch (const std::exception& t)
    {
        std::cerr << "Ошибка создания треуголника. Причина: " << t.what() << std::endl;
    }

    try {
        right_angled_triangle right_angled_triangle(10, 20, 30, 30, 60, 90);
        Triangle* new_right_angled_triangle = &right_angled_triangle;
        print_info(new_right_angled_triangle);
        std::cout << "создан." << std::endl;
    }
    catch (const std::exception& t_90)
    {
        std::cerr << "Ошибка создания прямоугольного треуголника. Причина: " << t_90.what() << std::endl;
    }

    try {
        isosceles_triangle isosceles_triangle(10, 20, 30, 50, 60, 70);
        Triangle* new_isosceles_triangle = &isosceles_triangle;
        print_info(new_isosceles_triangle);
        std::cout << "создан." << std::endl;
    }
    catch (const std::exception& t_AB)
    {
        std::cerr << "Ошибка создания равнобедренного труголника. Причина: " << t_AB.what() << std::endl;
    }

    try {
        Equilateral_triangle Equilateral_triangle(30, 30, 30, 60, 60, 60);
        Triangle* new_Equilateral_triangle = &Equilateral_triangle;
        print_info(new_Equilateral_triangle);
        std::cout << "создан." << std::endl;
    }
    catch (const std::exception& t_ABC)
    {
        std::cerr << "Ошибка создания равностороннего треуголника. Причина: " << t_ABC.what() << std::endl;
    }

    try {
        Quadrilateral quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
        Quadrilateral* new_quadrilateral = &quadrilateral;
        print_info(new_quadrilateral); 
        std::cout << "создан." << std::endl;
    }
    catch (const std::exception& q)
    {
        std::cerr << "Ошибка создания четырёхугольник. Причина: " << q.what() << std::endl;
    }

    try {
        Rectangle Rectangle(10, 20, 10, 20, 110, 100, 70, 80);
        Quadrilateral* new_Rectangle = &Rectangle;
        print_info(new_Rectangle);
        std::cout << "создан." << std::endl;
    }
    catch (const std::exception& q_AB)
    {
        std::cerr << "Ошибка создания прямоугольника. Причина: " << q_AB.what() << std::endl;
    }

    try {
        Square Square(40, 40, 40, 40, 90, 90, 90, 90);
        Quadrilateral* new_Square = &Square;
        print_info(new_Square);
        std::cout << "создан." << std::endl;
    }
    catch (const std::exception& q_A)
    {
        std::cerr << "Ошибка создания квадрата. Причина: " << q_A.what() << std::endl;
    }

    try {

        Parallelogram Parallelogram(20, 40, 20, 40, 60, 120, 60, 120);
        Quadrilateral* new_Parallelogram = &Parallelogram;
        print_info(new_Parallelogram);
        std::cout << "создан." << std::endl;
    }
    catch (const std::exception& q_ab_AB)
    {
        std::cerr << "Ошибка создания параллелограмма.Причина: " << q_ab_AB.what() << std::endl;
    }

    try {
        Rhomb Rhomb(30, 30, 30, 30, 40, 140, 40, 140);
        Quadrilateral* new_Rhomb = &Rhomb;
        print_info(new_Rhomb);
        std::cout << "создан." << std::endl;
    }
    catch (const std::exception& q_Romb)
    {
        std::cerr << "Ошибка создания ромба. Причина: " << q_Romb.what() << std::endl;
    }
    return 0;
}