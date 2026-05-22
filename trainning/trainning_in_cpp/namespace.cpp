#include <iostream>

namespace example {
	int variable = 42;

	void display(){
		std::cout << "This is the exanple namespace. " << std::endl;
	}
}

namespace another {
	int variable = 99;

	void display(){
		std::cout << "This is the another namespace. " << std::endl;
	}
}

int main(){

	std::cout << "Value from 'example' namespace: " << example::variable << std::endl;
	example::display();
	std::cout << "Value from 'anothr' namespace: " << another::variable << std::endl;
	another::display();

	return 0;
}
