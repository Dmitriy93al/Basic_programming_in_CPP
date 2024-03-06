#include<iostream>
#include"Quadrangle.h"
#include"Rectangle.h"

Rectangle::Rectangle() {};

Rectangle::Rectangle(const int& side_a, const int& side_b)
	{
		name = "Ïðÿìîóãîëüíèê:";
		this->side_a = side_a;
		this->side_b = side_b;
		side_c = side_a;
		side_d = side_b;

		this->ñorner_a = 90;
		this->ñorner_b = 90;
		this->ñorner_c = 90;
		this->ñorner_d = 90;

	}
