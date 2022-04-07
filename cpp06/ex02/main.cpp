#include "Base.hpp"

Base*	generate()
{
	srand(time(NULL));
	switch((rand() % 3))
	{
		case 0:
			return new A();
		case 1:
			return new B();
		case 2:
			return new C();
	}
	return nullptr;
}

void	identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A Class" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B Class" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C Class" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		Base &a = dynamic_cast<A &>(p);
		std::cout << "A Class" << std::endl;
	}
	catch (const std::bad_cast &error) {}
	try
	{
		Base &b = dynamic_cast<B &>(p);
		std::cout << "B Class" << std::endl;
	}
	catch (const std::bad_cast &error) {}
	try
	{
		Base &c = dynamic_cast<C &>(p);
		std::cout << "C Class" << std::endl;
	}
	catch (const std::bad_cast &error) {}
}

int main()
{
	Base* base = generate();
	identify(base);
	identify(*base);
	delete base;
	return 0;
}
