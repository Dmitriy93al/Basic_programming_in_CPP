#include<iostream>
#include"Triangle.h"
#include"EquilateralTriangle.h"

EquilateralTriangle::EquilateralTriangle(const int& side_a)
	{
		name = "�������������� �����������: ";
		this->side_a = side_a;
		this->�orner_a = 60;
		this->�orner_b = 60;
		this->�orner_c = 60;
		side_c = side_a;
		side_b = side_a;
	}
