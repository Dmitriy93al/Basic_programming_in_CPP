#pragma once

#include"Figure.h"

class Quadrangle :public Figure
{
protected:
	int side_a = 10;
	int side_b = 20;
	int side_c = 30;
	int side_d = 40;
	int �orner_a = 50;
	int �orner_b = 60;
	int �orner_c = 70;
	int �orner_d = 80;

public:

	Quadrangle();

	Quadrangle(const int& side_a, const int& side_b, const int& side_c, const int& side_d, const int& �orner_a, const int& �orner_b, const int& �orner_c, const int& �orner_d);
	
	void print_info() override;
	
};