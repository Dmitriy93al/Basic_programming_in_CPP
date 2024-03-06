#include<iostream>
#include"Triangle.h"
#include"EquilateralTriangle.h"

EquilateralTriangle::EquilateralTriangle(const int& side_a)
	{
		name = "Ðàâíîñòîðîííèé òðåóãîëüíèê: ";
		this->side_a = side_a;
		this->ñorner_a = 60;
		this->ñorner_b = 60;
		this->ñorner_c = 60;
		side_c = side_a;
		side_b = side_a;
	}
