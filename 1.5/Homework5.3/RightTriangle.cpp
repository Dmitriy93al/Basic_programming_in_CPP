#include<iostream>
#include"Triangle.h"
#include"RightTriangle.h"

RightTriangle::RightTriangle(const int& side_a, const int& side_b, const int& side_c, const int& ñorner_a, const int& ñorner_b)
	{
		name = "Ïðÿìîóãîëüíèê:";
		this->side_a = side_a;
		this->side_b = side_b;
		this->side_c = side_c;
		this->ñorner_a = ñorner_a;
		this->ñorner_b = ñorner_b;
		this->ñorner_c = 90;
	}
