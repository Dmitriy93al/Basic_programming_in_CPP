#include<iostream>
#include"Figure.h"
#include"Quadrangle.h"

Quadrangle::Quadrangle() {};

Quadrangle::Quadrangle(const int& side_a, const int& side_b, const int& side_c, const int& side_d, const int& ñorner_a, const int& ñorner_b, const int& ñorner_c, const int& ñorner_d)
{
	name = "×åòûðåõóãîëüíèê: ";
	this->side_a = side_a;
	this->side_b = side_b;
	this->side_c = side_c;
	this->side_d = side_d;

	this->ñorner_a = ñorner_a;
	this->ñorner_b = ñorner_b;
	this->ñorner_c = ñorner_c;
	this->ñorner_d = ñorner_d;
}
	
	void Quadrangle::print_info()
	{
		std::cout << name << std::endl;
		std::cout << "Ñòîðîíû: " << "a = " << side_a << " b = " << side_b << " c = " << side_c << " d = " << side_d << std::endl;
		std::cout << "Óãëû: " << "A = " << ñorner_a << " B = " << ñorner_b << " C = " << ñorner_c << " D = " << ñorner_d << std::endl;
		std::cout << std::endl;
	}
