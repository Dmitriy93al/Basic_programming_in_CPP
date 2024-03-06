#include "Equilateral_triangle.h"
#include "MyException.h"

Equilateral_triangle::Equilateral_triangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) {
	name = "Равносторонный треугольник ";
	if ((a != c) && (a != b) && (c != b) && (A != 60) && (B != 60) && (C != 60))
	{
		throw MyException("все стороны не равны, все углы не равны 60");
	}
};
