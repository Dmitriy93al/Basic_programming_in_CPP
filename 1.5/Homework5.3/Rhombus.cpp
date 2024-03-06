#include"Square.h"
#include"Rhombus.h"


	Rhombus::Rhombus(const int& side_a, const int& ñorner_a, const int& ñorner_b)
	{
		name = "Ðîìá:";
		this->side_a = side_a;
		side_c = side_a;
		side_b = side_a;
		side_d = side_a;

		this->ñorner_a = ñorner_a;
		this->ñorner_b = ñorner_b;
		ñorner_c = ñorner_a;
		ñorner_d = ñorner_b;
	}
