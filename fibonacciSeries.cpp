#include <iostream>

class Fibonacci {
public:
	Fibonacci() { x_ = 0; y_ = 1; z_ = x_ + y_;}
	void printFibonacciNumbers(int);
private:
	int x_;
	int y_;
	int z_;
};

void Fibonacci::printFibonacciNumbers(int count) {
	std::cout << "The first " << count <<" fibonacci numbers are: " << x_ << " " << y_ << " ";
	while (count != 2) { 
		std::cout << z_ << " ";
		x_ = y_;
		y_ = z_;
		z_ = x_ + y_;
		--count;
	}
	std::cout << std::endl;
}

int main() {
	Fibonacci fibonacci_series;
	fibonacci_series.printFibonacciNumbers(8);
	return 0;
}
