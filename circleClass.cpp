#include <iostream>

class Circle {

public:
	Circle(double);
	double get_area() const;
	double get_circumference() const;

private:
	double radius_;
	const float pi_ = 3.14;
	double computeArea() const;
	double computeCircumference() const;
};

Circle::Circle(double radius) {
	radius_ = radius;
}

double Circle::get_area() const {
	return computeArea();
}

double Circle::get_circumference() const {
	return computeCircumference();
}

double Circle::computeArea() const {
	return pi_ * radius_ * radius_;

}

double Circle::computeCircumference() const {
	return 2 * pi_ * radius_;
}

int main() {
	double radius;
	std::cout << "Enter the radius of a circle: ";
	std::cin >> radius;
	Circle circle(radius);
	std::cout << "The area of the circle is: " << circle.get_area() << std::endl;
	std::cout << "The circumference of the circle is: " << circle.get_circumference() << std::endl;
	return 0;
}
