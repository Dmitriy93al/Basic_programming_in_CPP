#include "isosceles_triangle.h"
#include "MyException.h"

isosceles_triangle::isosceles_triangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) {
	name = "�������������� ����������� ";
	if ((a != c) && (A != B))
	{
		throw MyException("������� a � c �� �����, ���� A � C �� �����");
	}
};