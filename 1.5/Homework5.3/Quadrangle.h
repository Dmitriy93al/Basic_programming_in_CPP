#pragma once

#include"Figure.h"

class Quadrangle :public Figure
{
protected:
	int side_a = 10;
	int side_b = 20;
	int side_c = 30;
	int side_d = 40;
	int ñorner_a = 50;
	int ñorner_b = 60;
	int ñorner_c = 70;
	int ñorner_d = 80;

public:

	Quadrangle();

	Quadrangle(const int& side_a, const int& side_b, const int& side_c, const int& side_d, const int& ñorner_a, const int& ñorner_b, const int& ñorner_c, const int& ñorner_d);
	
	void print_info() override;
	
};