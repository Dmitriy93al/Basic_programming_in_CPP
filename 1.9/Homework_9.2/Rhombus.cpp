#include"Square.h"
#include"Rhombus.h"


	Rhombus::Rhombus(const int& side_a, const int& �orner_a, const int& �orner_b)
	{
		name = "����:";
		this->side_a = side_a;
		side_c = side_a;
		side_b = side_a;
		side_d = side_a;

		this->�orner_a = �orner_a;
		this->�orner_b = �orner_b;
		�orner_c = �orner_a;
		�orner_d = �orner_b;
	}
