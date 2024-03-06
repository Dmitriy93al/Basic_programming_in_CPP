#include "right_angled_triangle.h"
#include "MyException.h"


right_angled_triangle::right_angled_triangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) {
	name = "������������� �����������";
	if (C != 90)
	{
		throw MyException("���� C �� ����� 90");
	}
}