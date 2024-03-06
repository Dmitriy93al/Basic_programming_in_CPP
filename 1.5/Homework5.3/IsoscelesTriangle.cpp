#include<iostream>
#include"Triangle.h"
#include"IsoscelesTriangle.h"

IsoscelesTriangle::IsoscelesTriangle(const int& side_a, const int& side_b, const int& ñorner_a, const int& ñorner_b)
	{
		name = "Ðàâíîáåäðåííûé òðåóãîëüíèê: ";
		this->side_a = side_a;
		this->side_b = side_b;
		this->ñorner_a = ñorner_a;
		this->ñorner_b = ñorner_b;
		side_c = side_a;
		ñorner_c = ñorner_a;
	}
