#include <iostream>
#include <string>

class Figure
{
protected:
    std::string name;

public:
    virtual void print_info() {}
}; 

void print(Figure* figure)
{
    figure->print_info();
} 

class Triangle : public Figure
{

protected:
	int side_a = 10;
	int side_b = 20;
	int side_c = 30;
	int сorners_a = 50;
	int сorners_b = 60;
	int сorners_c = 70;
	
public:
	Triangle() {}

	Triangle(const int& side_a, const int& side_b, const int& side_c, const int& angel_a, const int& angel_b, const int& angel_c)
	{
		name = "Треугольник";
		this->side_a = side_a;
		this->side_b = side_b;
		this->side_c = side_c;
		this->сorners_a = сorners_a;
		this->сorners_b = сorners_b;
		this->сorners_c = сorners_c;
	}
	void print_info() override
	{
		std::cout << name << std::endl;
		std::cout << "Стороны : " << "a = " << side_a << " b = " << side_b << " c = " << side_c << std::endl;
		std::cout << "Углы : " << "A = " << сorners_a << " B = " << сorners_b << " C = " << сorners_c << std::endl;
		std::cout << "\n";
	}
};

class A_right_angled_triangle : public Triangle    
{
public:
	A_right_angled_triangle(const int& side_a, const int& side_b, const int& side_c, const int& сorners_a, const int& сorners_b)
	{
		name = "Прямоугольный треугольник";
		this->side_a = side_a;
		this->side_b = side_b;
		this->side_c = side_c;
		this->сorners_a = сorners_a;
		this->сorners_b = сorners_b;
		this->сorners_c = 90;
	}
};

class Isosceles_triangle : public Triangle
{
public:
	Isosceles_triangle(const int& side_a, const int& side_b, const int& сorners_a, const int& сorners_b)
	{
		name = "Равнобедренный треугольник: ";
		this->side_a = side_a;
		this->side_b = side_b;
		this->сorners_a = сorners_a;
		this->сorners_b = сorners_b;
		side_c = side_a;
		сorners_c = сorners_a;
	}
}; 

class An_equilateral_triangle : public Triangle{
public:
	An_equilateral_triangle(const int& side_a){
		name = "Равносторонний треугольник: "; 
		this->side_a = side_a;
		this->сorners_a = 60;
		this->сorners_b = 60;
		this->сorners_c = 60;
		side_c = side_a;
		side_b = side_a;
	}
};

class Quadrangle :public Figure{
protected:
	int side_a = 10;
	int side_b = 20;
	int side_c = 30;
	int side_d = 40;
	int сorners_a = 50;
	int сorners_b = 60;
	int сorners_c = 70;
	int сorners_d = 80;
public:
	Quadrangle() {}
	Quadrangle(const int& side_a, const int& side_b, const int& side_c, const int& side_d, const int& сorners_a, const int& сorners_b, const int& сorners_c, const int& сorners_d){
		name = "Четырехугольник: ";
		this->side_a = side_a;
		this->side_b = side_b;
		this->side_c = side_c;
		this->side_d = side_d;

		this->сorners_a = сorners_a;
		this->сorners_b = сorners_b;
		this->сorners_c = сorners_c;
		this->сorners_d = сorners_d;
	}
	void print_info() override{
		std::cout << name << std::endl;
		std::cout << "Стороны : " << "a = " << side_a << " b = " << side_b << " c = " << side_c << " d = " << side_d << std::endl;
		std::cout << "Углы : " << "A = " << сorners_a << " B = " << сorners_b << " C = " << сorners_c << " D = " << сorners_d << std::endl;
		std::cout << "\n";
	}
};

class Rectangle : public Quadrangle{
public:
	Rectangle() {}
	Rectangle(const int& side_a, const int& side_b){
		name = "Прямоугольник: ";
		this->side_a = side_a;
		this->side_b = side_b;
		side_c = side_a;
		side_d = side_b;

		this->сorners_a = 90;
		this->сorners_b = 90;
		this->сorners_c = 90;
		this->сorners_d = 90;
	}
};

class Square : public Rectangle{
public:
	Square() {}
	Square(const int& side_a){
		name = "Квадрат: ";
		this->side_a = side_a;
		side_b = side_a;
		side_c = side_a;
		side_d = side_a;

		this->сorners_a = 90;
		this->сorners_b = 90;
		this->сorners_c = 90;
		this->сorners_d = 90;
	}
};

class Parallelogram : public Rectangle{
public:
	Parallelogram(const int& side_a, const int& side_b, const int& сorners_a, const int& сorners_b){
		name = "Параллелограмм: ";
		this->side_a = side_a;
		this->side_b = side_b;
		side_c = side_a;
		side_d = side_b;

		this->сorners_a = сorners_a;
		this->сorners_b = сorners_b;
		сorners_c = сorners_a;
		сorners_d = сorners_b;
	}
};

class Rhomb : public Square{
public:
	Rhomb(const int& side_a, const int& сorners_a, const int& сorners_b){
		name = "Ромб: ";
		this->side_a = side_a;
		side_c = side_a;
		side_b = side_a;
		side_d = side_a;

		this->сorners_a = сorners_a;
		this->сorners_b = сorners_b;
		сorners_c = сorners_a;
		сorners_d = сorners_b;
	}
};


int main(int argv, char** argc)
{
    setlocale(LC_ALL, "Russian");
 
    Figure figure;

    Triangle triangle(10, 20, 30, 50, 60, 70); //Triangle triangle

    A_right_angled_triangle A_right_angled_triangle(10, 20, 30, 50, 60); //RightTriangle right_triangle
    
    Isosceles_triangle Isosceles_triangle(10, 20, 50, 60); //IsoscelesTriangle isosceles_triangle
    
    An_equilateral_triangle An_equilateral_triangle(30); //EquilateralTriangle equilateral_triangle
    
    Quadrangle Quadrangle(10, 20, 30, 40, 50, 60, 70, 80);//Quadrangle quadrangle
    
    Rectangle Rectangle(10, 20); //Rectangle rectangle
    
    Square Square(20); //Square square(555);
    
    Parallelogram Parallelogram(20, 30, 30, 40); //Parallelogram parallelogram
    
    Rhomb Rhomb(30, 30, 40); //Rhombus rhombus
    
    print(&triangle);
    print(&A_right_angled_triangle);
    print(&Isosceles_triangle);
    print(&An_equilateral_triangle);
    print(&Quadrangle);
    print(&Rectangle);
    print(&Square);
    print(&Parallelogram);
    print(&Rhomb);

  return 0;
}