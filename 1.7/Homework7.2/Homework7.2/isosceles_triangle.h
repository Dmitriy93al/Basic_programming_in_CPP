#pragma once
#include "triangle.h"
#include "isosceles_triangle.h"

class isosceles_triangle : public Triangle {
public:
    isosceles_triangle(int a, int b, int c, int A, int B, int C);
};