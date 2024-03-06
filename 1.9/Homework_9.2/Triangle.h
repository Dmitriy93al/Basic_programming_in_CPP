#pragma once
#include"Figure.h"
class Triangle : public Figure
{

protected:
	int side_a = 10;
	int side_b = 20;
	int side_c = 30;
	int ñorner_a = 50;
	int ñorner_b = 60;
	int ñorner_c = 70;

public:
	Triangle();

	Triangle(const int& side_a, const int& side_b, const int& side_c, const int& ñorner_a, const int& ñorner_b, const int& ñorner_c);
	
	void print_info() override;
	
};