#include <iostream>

class MyClass {
	public:
		int myInteger;
		double myDouble;

		void display(){
			std::cout << "Integer:  " << myInteger << " , Double: " << myDouble << std::endl;
		}
};


int main(){
	MyClass obj;

	obj.myInteger = 42;
	obj.myDouble = 3.14;

	obj.display();

	return 0;
}
