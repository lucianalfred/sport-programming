#include <iostream>

class MyClass
{
	private:
		int x;
		double y;
	public:
		MyClass();
};

MyClass::MyClass() : x(0), y(0)
{
	std::cout << "example" << std::endl;
}
