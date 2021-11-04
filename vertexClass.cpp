#include <iostream>
#include <time.h>


class Vertex {
public:
	Vertex();
	void print();
private:
	int x_;
	int y_;
};

Vertex::Vertex() {
	this->x_ = rand() % (201 - 100);
	this->y_ = rand() % (201 - 100);
}

void Vertex::print() {
	std::cout << "Vertex(" << this->x_ << "," << this->y_ << ")\n";
}

int main(){
	srand(time(NULL));
	Vertex vertices[5];
	for(int i = 0; i < 5; ++i){
		vertices[i].print();
	}
}
