#include<iostream>
#include"Triangle.h"
#include"IsoscelesTriangle.h"

IsoscelesTriangle::IsoscelesTriangle(const int& side_a, const int& side_b, const int& �orner_a, const int& �orner_b)
	{
		name = "�������������� �����������: ";
		this->side_a = side_a;
		this->side_b = side_b;
		this->�orner_a = �orner_a;
		this->�orner_b = �orner_b;
		side_c = side_a;
		�orner_c = �orner_a;
	}
