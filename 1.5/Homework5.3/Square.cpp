#include"Square.h"
#include"Rectangle.h"
Square::Square() {};

	Square::Square(const int& side_a)
	{
		name = "�������:";
		this->side_a = side_a;
		side_b = side_a;
		side_c = side_a;
		side_d = side_a;

		this->�orner_a = 90;
		this->�orner_b = 90;
		this->�orner_c = 90;
		this->�orner_d = 90;;
	}
