#include <iostream>

class Complex {
public:
	Complex() {};
	Complex(int number1, int number2);
	void set_real_part(double number);
	void set_imaginary_part(double number);
	void get_the_result()const;
	void sum(const Complex&);
	void sub(const Complex&);
	void mul(const Complex&);
private:
	double real_part_;
	double imaginary_part_;
};

Complex::Complex(int number1, int number2) {
	real_part_ = number1;
	imaginary_part_ = number2;
}

void Complex::sum(const Complex& number) {
	real_part_ += number.real_part_;
	imaginary_part_ += number.imaginary_part_;
}

void Complex::sub(const Complex& number) {
        real_part_ -= number.real_part_;
        imaginary_part_ -= number.imaginary_part_;
}

void Complex::mul(const Complex& number) {
	real_part_ = (real_part_ * number.real_part_ - imaginary_part_ * number.imaginary_part_);
	imaginary_part_ = (real_part_ * number.imaginary_part_ + imaginary_part_ * number.real_part_);
}

void Complex::get_the_result() const {
	std::cout << real_part_ << " + i" << imaginary_part_ << std::endl;
}

int main() {
	Complex z1(5,6);
	Complex z2(3,2);
	z1.sub(z2);
	z1.get_the_result();
	return 0;
}
