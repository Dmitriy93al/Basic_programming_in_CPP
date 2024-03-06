#include <iostream>

class Fraction
{
private:
	int numerator_ = 0;
	int denominator_ = 0;

public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}

	int NOD(int numerator, int denominator) 
	{
		numerator = abs(numerator);
		denominator = abs(denominator);

		while (numerator > 0 && denominator > 0)

			if (numerator > denominator)
				numerator %= denominator;

			else
				denominator %= numerator;

		return numerator + denominator;
	}

	Fraction operator + (const Fraction& other) 
	{
		Fraction temp;

		temp.numerator_ = ((this->numerator_ * other.denominator_) + (other.numerator_ * this->denominator_));
		temp.denominator_ = (this->denominator_ * other.denominator_);

		int nod = NOD(temp.numerator_, temp.denominator_);

		temp.numerator_ = temp.numerator_ / nod;
		temp.denominator_ = temp.denominator_ / nod;

		return temp;
	}
	Fraction operator - (const Fraction& other) 
	{
		Fraction temp;

		temp.numerator_ = ((this->numerator_ * other.denominator_) - (other.numerator_ * this->denominator_));
		temp.denominator_ = (this->denominator_ * other.denominator_);

		int nod = NOD(temp.numerator_, temp.denominator_);

		temp.numerator_ = temp.numerator_ / nod;
		temp.denominator_ = temp.denominator_ / nod;

		return temp;
	}

	Fraction operator * (const Fraction& other) 
	{
		Fraction temp;

		temp.numerator_ = this->numerator_ * other.numerator_;
		temp.denominator_ = this->denominator_ * other.denominator_;

		int nod = NOD(temp.numerator_, temp.denominator_);

		temp.numerator_ = temp.numerator_ / nod;
		temp.denominator_ = temp.denominator_ / nod;

		return temp;
	}

	Fraction operator / (const Fraction& other) 
	{
		Fraction temp;

		temp.numerator_ = this->numerator_ * other.denominator_;
		temp.denominator_ = this->denominator_ * other.numerator_;

		int nod = NOD(temp.numerator_, temp.denominator_);

		temp.numerator_ = temp.numerator_ / nod;
		temp.denominator_ = temp.denominator_ / nod;

		return temp;
	}

	Fraction& operator++ () 
	{
		this->numerator_ = this->numerator_ + this->denominator_;

		int nod = NOD(this->numerator_, this->denominator_);

		this->numerator_ = this->numerator_ / nod;
		this->denominator_ = this->denominator_ / nod;

		return *this;
	}

	Fraction operator++ (int) 
	{
		Fraction temp = *this;

		this->numerator_ = this->numerator_ + this->denominator_;

		int nod = NOD(this->numerator_, this->denominator_);

		this->numerator_ = this->numerator_ / nod;
		this->denominator_ = this->denominator_ / nod;

		return temp;
	}

	Fraction& operator-- () 
	{
		this->numerator_ = this->numerator_ - this->denominator_;

		int nod = NOD(this->numerator_, this->denominator_);

		this->numerator_ = this->numerator_ / nod;
		this->denominator_ = this->denominator_ / nod;

		return *this;
	}

	Fraction operator-- (int) 
	{
		Fraction temp = *this;
 
		this->numerator_ = this->numerator_ - this->denominator_;

		int nod = NOD(this->numerator_, this->denominator_);

		this->numerator_ = this->numerator_ / nod;
		this->denominator_ = this->denominator_ / nod;

		return temp;
	}

	friend std::ostream& operator << (std::ostream& os, const Fraction& fra);
	Fraction() {}
};

std::ostream& operator << (std::ostream& os, const Fraction& fra)
{
	if (fra.denominator_ == 1)
		os << fra.numerator_;
	else
		os << fra.numerator_ << "/" << fra.denominator_;

	return os;
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Rus");

	int num1, num2, denom1, denom2;

	std::cout << "Введите числитель дроби 1: ";
	std::cin >> num1;

	std::cout << "Введите знаминатель дроби 2: ";
	std::cin >> denom1;

	std::cout << "Введите числитель дроби 1: ";
	std::cin >> num2;

	std::cout << "Введите знаминатель дроби 2: ";
	std::cin >> denom2;

	Fraction f1(num1, denom1);
	Fraction f2(denom1, denom2);

	std::cout << f1 << " + " << f2 << " = " << f1 + f2 << std::endl;
	std::cout << f1 << " - " << f2 << " = " << f1 - f2 << std::endl;
	std::cout << f1 << " * " << f2 << " = " << f1 * f2 << std::endl;
	std::cout << f1 << " / " << f2 << " = " << f1 / f2 << std::endl;
	std::cout << "++" << f1 << " * " << f2 << " = ";
	std::cout << (++f1) * f2 << std::endl;
	std::cout << "Значение дроби 1 = " << f1 << std::endl;
	std::cout << f1 << "--" << " * " << f2 << " = ";
	std::cout << (f1--) * f2 << std::endl;
	std::cout << "Значение дроби 1 = " << f1;

return 0;
}