#include"Parallelogram.h"
#include"Rectangle.h"

Parallelogram::Parallelogram(const int& side_a, const int& side_b, const int& ñorner_a, const int& ñorner_b)
	{
		name = "Ïàðàëëåëîãðàìì: ";
		this->side_a = side_a;
		this->side_b = side_b;
		side_c = side_a;
		side_d = side_b;

		this->ñorner_a = ñorner_a;
		this->ñorner_b = ñorner_b;
		ñorner_c = ñorner_a;
		ñorner_d = ñorner_b;
	}
