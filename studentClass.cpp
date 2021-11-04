#include <iostream>

class Student {
public:
	void set_name_and_surname();
	void get_name_and_surname() const;
private:
	char name_[20];
	char surname_[40];
};

void Student::set_name_and_surname() { 
                std::cout << "Enter the name of the student: ";
                std::cin >> name_; 
                std::cout << "Enter the surname of the student: ";
                std::cin >> surname_;
}

void Student::get_name_and_surname() const {
	std::cout << "The name of the student is: " << name_ << std::endl;
	std::cout << "The surname of the student is: " << surname_ << std::endl;
}

int main() {
	Student array[5];
	for (int i = 0; i < 5; ++i) {
		array[i].set_name_and_surname();
	}
	std::cout << std::endl;
	for (int i = 0; i < 5; ++i) {
		array[i].get_name_and_surname();
	}
	return 0;
}
