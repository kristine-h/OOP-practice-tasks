#include <iostream>

class Planets {
public:
	void set_name(const std::string& name) { name_ = name;}
	void set_radius(const double& radius) { radius_ = radius;}
	void set_distance(const double& distance) { distance_from_the_Sun = distance;}
	void set_mass(const double& mass) { mass_ = mass;}
	std::string get_name() const { return name_;}
	double get_gravity() const { return calculate_gravity();}
private:
	std::string name_;
	double distance_from_the_Sun;
	double radius_;
	double mass_;
	const double G_ = 6.6743E-11;
	double calculate_gravity() const { return (G_ * mass_) / (radius_ * radius_);}
};

int main() {
	Planets planet0;
	planet0.set_name("Earth");
	planet0.set_radius(6.371);
	planet0.set_distance(1);
	planet0.set_mass(5.972e+24);
	std::cout << "\nThe Gravity of " << planet0.get_name() << " is " << planet0.get_gravity() << " meters per second squared \n\n";

	Planets planet1;
	std::string name;
	std::cout << "Enter the name of your favorite planet: ";
	std::cin >> name;
	planet1.set_name(name);

	double radius;
	std::cout << "Enter the radius of " << planet1.get_name() << " in kms: ";
	std::cin >> radius;
	planet1.set_radius(radius);

	double distance;
	std::cout << "Enter the distance of " << planet1.get_name() << " from the sun in kms: ";
	std::cin >> distance;
	planet1.set_distance(distance);
	
	double mass;
	std::cout << "Enter the mass of " << planet1.get_name() << " in kgs: ";
	std::cin >> mass;
	planet1.set_mass(mass);
	std::cout << "The gravity of " << planet1.get_name() << " is " << planet1.get_gravity() << std::endl;
	return 0;
}
