#include<iostream>
#include"Triangle.h"
#include"Figure.h"

	Triangle::Triangle() {}

	Triangle::Triangle(const int& side_a, const int& side_b, const int& side_c, const int& ñorner_a, const int& ñorner_b, const int& ñorner_c)
	{
		name = "Òðåóãîëüíèê:";

		this->side_a = side_a;
		this->side_b = side_b;
		this->side_c = side_c;
		this->ñorner_a = ñorner_a;
		this->ñorner_b = ñorner_b;
		this->ñorner_c = ñorner_c;
	}
	void Triangle::print_info()
	{
		std::cout << name << std::endl;
		std::cout << "Ñòîðîíû : " << "a = " << side_a << " b = " << side_b << " c = " << side_c << std::endl;
		std::cout << "Óãëû : " << "A = " << ñorner_a << " B = " << ñorner_b << " C = " << ñorner_c << std::endl;
		std::cout << std::endl;
	}