#pragma once
#include "triangle.h"
#include "right_angled_triangle.h"

class right_angled_triangle : public Triangle {
public:
    right_angled_triangle(int a, int b, int c, int A, int B, int C);
};