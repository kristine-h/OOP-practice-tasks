#include <iostream>

class Employee {
public:
	void set_name(const std::string& name) { name_ = name; }
	void set_year_of_joining(int year) { year_of_joining_ = year; }
	void set_salary(double salary) { salary_ = salary; }
	void set_address(const std::string& address) { address_ = address; }
	void get_info() const;
private:
        std::string name_;
        int year_of_joining_;
        double salary_;
        std::string address_;
};

void Employee::get_info() const {
	std::cout << name_ << "\t\t\t" << year_of_joining_ << "\t\t\t" << salary_ << "\t\t\t" << address_ <<std::endl;
}

int main() {
	Employee firstEmployee;
	Employee secondEmployee;
	Employee thirdEmployee;

	firstEmployee.set_name("Robert");
	firstEmployee.set_year_of_joining(2017);
	firstEmployee.set_salary(6000);
	firstEmployee.set_address("64C - Wall street");
	
	secondEmployee.set_name("Sam");
        secondEmployee.set_year_of_joining(2020);
        secondEmployee.set_salary(5500);
        secondEmployee.set_address("68D - Wall street");

	thirdEmployee.set_name("John");
        thirdEmployee.set_year_of_joining(2018);
        thirdEmployee.set_salary(6000);
        thirdEmployee.set_address("26B - Wall street");
	
	std::cout << "Name\t\t\tYear of joining\t\tSalary in dollars\tAddress\n";
	firstEmployee.get_info();
	secondEmployee.get_info();
	thirdEmployee.get_info();
	return 0;
}
