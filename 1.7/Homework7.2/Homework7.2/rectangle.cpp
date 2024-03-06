#include "Rectangle.h"
#include "MyException.h"

Rectangle::Rectangle(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrilateral(a, b, c, d, A, B, C, D) {
    name = "�������������:";
    if ((a != c) && (b != d) && (A != 90) && (B != 90) && (C != 90) && (D != 90))
    {
        throw MyException("������� a,c � b,d ������� �� �����, ��� ���� �� ����� 90");
    }
}