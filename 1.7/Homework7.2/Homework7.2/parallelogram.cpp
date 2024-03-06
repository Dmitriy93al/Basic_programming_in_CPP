#include "Parallelogram.h"
#include "MyException.h"

Parallelogram::Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrilateral(a, b, c, d, A, B, C, D) {
    name = "Параллелограмм:";
    if ((a != c) && (b != d) && (A != C) && (B != D))
    {
        throw MyException("стороны a,c и b,d попарно не равны, углы A,C и B,D попарно не равны");
    }
}