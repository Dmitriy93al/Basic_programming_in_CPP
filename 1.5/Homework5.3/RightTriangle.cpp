#include<iostream>
#include"Triangle.h"
#include"RightTriangle.h"

RightTriangle::RightTriangle(const int& side_a, const int& side_b, const int& side_c, const int& �orner_a, const int& �orner_b)
	{
		name = "�������������:";
		this->side_a = side_a;
		this->side_b = side_b;
		this->side_c = side_c;
		this->�orner_a = �orner_a;
		this->�orner_b = �orner_b;
		this->�orner_c = 90;
	}
