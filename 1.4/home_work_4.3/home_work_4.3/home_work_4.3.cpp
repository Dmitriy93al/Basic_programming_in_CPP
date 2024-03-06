#include <iostream>
#include <string>

class Figure {
protected:
    std::string name = "Фигура: ";
    int num_sides = 0;
public:
    virtual bool check() {
        return num_sides == 0;
    }
    virtual void Print_info() {
        std::cout << name << std::endl;
        std::cout << (check() ? "Правильная" : "Неправильная") << std::endl;
        std::cout << "Количество сторон: " << num_sides << std::endl << std::endl;
    }
};
void Print_info(Figure* figure) {
    figure->Print_info();
}

class Triangle :public Figure {
public:
    Triangle(int side_a, int side_b, int side_c, int сorner_a, int сorner_b) {
        name = "Треугольник: ";
        num_sides = 3;
        this->side_a = side_a;
        this->side_b = side_b;
        this->side_c = side_c;
        this->сorner_a = сorner_a;
        this->сorner_b = сorner_b;
        сorner_c = 180 - сorner_a - сorner_b;
    }
    void Print_info() override {
        std::cout << name << std::endl;
        std::cout << (check() ? "Правильная" : "Неправильная") << std::endl;
        std::cout << "Количество сторон: " << num_sides << std::endl;
        std::cout << "Стороны: a=" << side_a << " b=" << side_b << " c=" << side_c << std::endl;
        std::cout << "Углы: A=" << сorner_a << " B=" << сorner_b << " C=" << сorner_c << std::endl << std::endl;
    }
    bool check() override {
        if (сorner_a + сorner_b + сorner_c == 180)
            return true;
        return Figure::check();
    }
protected:
    int side_a = 0;
    int side_b = 0;
    int side_c = 0;
    int сorner_a = 0;
    int сorner_b = 0;
    int сorner_c = 0;
};

class Quadrangle :public Figure
{
public:
    Quadrangle(int side_a, int side_b, int side_c, int side_d, int сorner_a, int сorner_b, int сorner_c, int сorner_d) {
        name = "Четырехугольник: ";
        num_sides = 4;
        this->side_a = side_a;
        this->side_b = side_b;
        this->side_c = side_c;
        this->side_d = side_d;
        this->сorner_a = сorner_a;
        this->сorner_b = сorner_b;
        this->сorner_c = сorner_c;
        this->сorner_d = сorner_d;
    }
    void Print_info() override {
        std::cout << name << std::endl;
        std::cout << (check() ? "Правильная" : "Неправильная") << std::endl;
        std::cout << "Количество сторон: " << num_sides << std::endl;
        std::cout << "Стороны: a = " << side_a << " b=" << side_b << " c=" << side_c << " d=" << side_d << std::endl;
        std::cout << "Углы: A=" << сorner_a << " B=" << сorner_b << " C=" << сorner_c << " D=" << сorner_d << std::endl << std::endl;
    }
    bool check() override {
        if (сorner_a <= 0 || сorner_b <= 0 || сorner_c <= 0 || сorner_d <= 0)
            return true;
        return Figure::check();
    }
protected:
    int side_a = 0;
    int side_b = 0;
    int side_c = 0;
    int side_d = 0;
    int сorner_a = 0;
    int сorner_b = 0;
    int сorner_c = 0;
    int сorner_d = 0;
};

class Right_Triangle : public Triangle {
public:
    Right_Triangle(int side_a, int side_b, int сorner_a, int сorner_b)
        : Triangle(side_a, side_b, sqrt(side_a* side_a + side_b * side_b), сorner_a, сorner_b) {
        name = "Прямоугольный треугольник";
        this->сorner_c = 90;
    }
    bool check() override {
        if (!Triangle::check()) {
            return false;
        }
        if (сorner_c != 90) {
            return false;
        }
        return true;
    }
};

class Isosceles_Triangle : public Triangle {
public:
    Isosceles_Triangle(int side_a, int side_b, int сorner_a, int сorner_b)
        : Triangle(side_a, side_b, sqrt(side_a* side_a + side_b * side_b), сorner_a, сorner_b) {
        name = "Равнобедренный треугольник ";
        side_c = side_a;
        сorner_c = 180 - сorner_a - сorner_b;
        side_a = side_c;
        сorner_a = сorner_c;
    }
    bool check() override {
        if (!Triangle::check()) {
            return true;
        }
        if (side_c != side_a && сorner_a != сorner_c) {
            return true;
        }
        return false;
    }
};

class Equilateral_Triangle : public Triangle {
public:
    Equilateral_Triangle(int side_a, int сorner_a)
        : Triangle(side_a, side_a, side_a, сorner_a, сorner_a) {
        name = "Равносторонний треугольник: ";
    }
    bool check() override {
        if (!Triangle::check()) {
            return false;
        }
        if (side_a != side_b != side_c && сorner_a != 60 && сorner_b != 60 && сorner_c != 60) {
            return false;
        }
        return true;
    }
};

class Rectangle : public Quadrangle {
public:
    Rectangle(int side_a, int side_b, int сorner_a)
        : Quadrangle(side_a, side_b, side_c, side_d, сorner_a, сorner_b, сorner_c, сorner_d) {
        name = "Прямоугольник: ";
        num_sides = 4;
        side_c = side_a;
        side_d = side_b;
        сorner_a = 90;
        сorner_b = 90;
        сorner_c = 90;
        сorner_d = 90;
    }
    bool check() override {
        if (Quadrangle::check()) {
            return false;
        }
        if (сorner_c == 90) {
            return true;
        }
        return true;
    }
};

class Square : public Quadrangle {
public:
    Square(int side_a, int сorner_a)
        : Quadrangle(side_a, side_b, side_c, side_d, сorner_a, сorner_b, сorner_c, сorner_d) {
        name = "Квадрат: ";
        num_sides = 4;
        side_b = side_c = side_d = side_a;
        сorner_a = 90;
        сorner_b = 90;
        сorner_c = 90;
        сorner_d = 90;
    }
    bool check() override {
        if (Quadrangle::check()) {
            return false;
        }
        if (side_a == side_b == side_c == side_d && сorner_a == 90 && сorner_b == 90 && сorner_c == 90 && сorner_d == 90) {
            return true;
        }
        return true;
    }
};

class Parallelogram : public Quadrangle {
public:
    Parallelogram(int side_a, int side_b, int сorner_a, int сorner_b)
        : Quadrangle(side_a, side_b, side_c, side_d, сorner_a, сorner_b, сorner_c, сorner_d) {
        name = "Параллелограмм: ";
        num_sides = 4;
        side_c = side_a;
        side_d = side_b;
        сorner_c = сorner_a;
        сorner_d = сorner_b;
    }
    bool check() override {
        if (!Quadrangle::check()) {
            return false;
        }
        if (side_a != side_b && side_c != side_d && сorner_a != сorner_b && сorner_c != сorner_d) {
            return false;
        }
        return true;
    }
};

class Rhomb : public Quadrangle {
public:
    Rhomb(int side_a, int сorner_a, int сorner_b)
        : Quadrangle(side_a, side_b, side_c, side_d, сorner_a, сorner_b, сorner_c, сorner_d) {
        name = "Ромб: ";
        num_sides = 4;
        side_b = side_c = side_d = side_a;
        сorner_c = сorner_a;
        сorner_d = сorner_b;
    }
    bool check() override {
        if (!Quadrangle::check()) {
            return false;
        }
        if (side_a != side_b && side_c != side_d && сorner_a != сorner_b && сorner_c != сorner_d) {
            return false;
        }
        return true;
    }
};

int main(int argc, char** argv) {
    setlocale(LC_ALL, "Rus");

    Figure figure;
    Print_info(&figure);

    Triangle triangle(10, 20, 30, 80, 60);
    Print_info(&triangle);

    Right_Triangle right_triangle(10, 20, 30, 50);
    Print_info(&right_triangle);

    Isosceles_Triangle isosceles_triangle(10, 20, 50, 60);
    Print_info(&isosceles_triangle);

    Equilateral_Triangle Equilateral_Triangle(30, 60);
    Print_info(&Equilateral_Triangle);

    Quadrangle Quadrangle(10, 20, 30, 40, 50, 60, 70, 180);
    Print_info(&Quadrangle);

    Rectangle Rectangle(10, 20, 90);
    Print_info(&Rectangle);

    Square Square(20, 90);
    Print_info(&Square);

    Parallelogram Parallelogram(20, 30, 30, 40);
    Print_info(&Parallelogram);

    Rhomb Rhomb(30, 30, 40);
    Print_info(&Rhomb);

    return 0;
}