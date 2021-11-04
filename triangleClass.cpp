#include <iostream>

class Triangle {
public:
	Triangle();
	void printArea();
	void printPerimeter();
private:
	double side1_;
	double side2_;
	double side3_;
	double computeArea();
	double computePerimeter();
};

Triangle::Triangle() {
	side1_ = 3;
	side2_ = 4;
	side3_ = 5;
}

double Triangle::computeArea() {
	return (side1_ * side2_) / 2;
}

double Triangle::computePerimeter() {
	return side1_ + side2_ + side3_;
}

void Triangle::printArea() { std::cout << "The area of the triangle is: " << computeArea() << std::endl; }
void Triangle::printPerimeter() { std::cout << "The circumference of the triangle is: " << computePerimeter() << std::endl; }

int main() {
	Triangle triangle;
	triangle.printArea();
	triangle.printPerimeter();
	return 0;
}
