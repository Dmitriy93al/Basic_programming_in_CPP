#include"Parallelogram.h"
#include"Rectangle.h"

Parallelogram::Parallelogram(const int& side_a, const int& side_b, const int& �orner_a, const int& �orner_b)
	{
		name = "��������������: ";
		this->side_a = side_a;
		this->side_b = side_b;
		side_c = side_a;
		side_d = side_b;

		this->�orner_a = �orner_a;
		this->�orner_b = �orner_b;
		�orner_c = �orner_a;
		�orner_d = �orner_b;
	}
