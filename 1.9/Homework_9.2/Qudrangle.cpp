#include<iostream>
#include"Figure.h"
#include"Quadrangle.h"

Quadrangle::Quadrangle() {};

Quadrangle::Quadrangle(const int& side_a, const int& side_b, const int& side_c, const int& side_d, const int& �orner_a, const int& �orner_b, const int& �orner_c, const int& �orner_d)
{
	name = "���������������: ";
	this->side_a = side_a;
	this->side_b = side_b;
	this->side_c = side_c;
	this->side_d = side_d;

	this->�orner_a = �orner_a;
	this->�orner_b = �orner_b;
	this->�orner_c = �orner_c;
	this->�orner_d = �orner_d;
}
	
	void Quadrangle::print_info()
	{
		std::cout << name << std::endl;
		std::cout << "�������: " << "a = " << side_a << " b = " << side_b << " c = " << side_c << " d = " << side_d << std::endl;
		std::cout << "����: " << "A = " << �orner_a << " B = " << �orner_b << " C = " << �orner_c << " D = " << �orner_d << std::endl;
		std::cout << std::endl;
	}
