#include<iostream>

#include"Triangle.h"
#include"Figure.h"
#include"RightTriangle.h"
#include"IsoscelesTriangle.h"
#include"EquilateralTriangle.h"
#include"Quadrangle.h"
#include"Rectangle.h"
#include"Square.h"
#include"Parallelogram.h"
#include"Rhombus.h"

void print(Figure* figure)
{
	figure->print_info();
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Rus");
	Figure figure;

	Triangle triangle(10, 20, 30, 50, 60, 70); //+
	print(&triangle);

	RightTriangle right_triangle(10, 20, 30, 50, 60); //+
	print(&right_triangle);

	IsoscelesTriangle isosceles_triangle(10, 20, 50, 60); //+
	print(&isosceles_triangle);

	EquilateralTriangle equilateral_triangle(30); //+
	print(&equilateral_triangle);

	Quadrangle quadrangle(20, 30, 20, 30, 30, 40, 30, 40); //+
	print(&quadrangle);

	Rectangle rectangle(10, 20); //+
	print(&rectangle);

	Square square(20); //+
	print(&square);

	Parallelogram parallelogram(20, 30, 30, 40); //+
	print(&parallelogram);

	Rhombus rhombus(30, 30, 40); //+
	print(&rhombus);
	
return 0;
}

