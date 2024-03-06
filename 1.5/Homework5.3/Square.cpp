#include"Square.h"
#include"Rectangle.h"
Square::Square() {};

	Square::Square(const int& side_a)
	{
		name = "Êâàäðàò:";
		this->side_a = side_a;
		side_b = side_a;
		side_c = side_a;
		side_d = side_a;

		this->ñorner_a = 90;
		this->ñorner_b = 90;
		this->ñorner_c = 90;
		this->ñorner_d = 90;;
	}
