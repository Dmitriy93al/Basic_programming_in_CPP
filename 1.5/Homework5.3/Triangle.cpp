#include<iostream>
#include"Triangle.h"
#include"Figure.h"

	Triangle::Triangle() {}

	Triangle::Triangle(const int& side_a, const int& side_b, const int& side_c, const int& �orner_a, const int& �orner_b, const int& �orner_c)
	{
		name = "�����������:";

		this->side_a = side_a;
		this->side_b = side_b;
		this->side_c = side_c;
		this->�orner_a = �orner_a;
		this->�orner_b = �orner_b;
		this->�orner_c = �orner_c;
	}
	void Triangle::print_info()
	{
		std::cout << name << std::endl;
		std::cout << "������� : " << "a = " << side_a << " b = " << side_b << " c = " << side_c << std::endl;
		std::cout << "���� : " << "A = " << �orner_a << " B = " << �orner_b << " C = " << �orner_c << std::endl;
		std::cout << std::endl;
	}