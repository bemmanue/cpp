#include "MutantStack.hpp"

int main()
{
	MutantStack<int> stack;
	stack.push(2);
	stack.push(4);
	stack.push(8);
	{
		MutantStack<int>::iterator iter = stack.begin();
		MutantStack<int>::iterator iter_end = stack.end();
		while (iter != iter_end)
		{
			std::cout << *iter << std::endl;
			++iter;
		}
	}
	std::cout << "Stack top: "<< stack.top() << std::endl;
	std::cout << "Stack size: " << stack.size() << std::endl;
	std::cout << "---------------" << std::endl;
	stack.pop();
	stack.push(10);
	stack.push(12);
	{
		MutantStack<int>::iterator iter = stack.begin();
		MutantStack<int>::iterator iter_end = stack.end();
		while (iter != iter_end)
		{
			std::cout << *iter << std::endl;
			++iter;
		}
	}
	std::cout << "Stack top: "<< stack.top() << std::endl;
	std::cout << "Stack size: " << stack.size() << std::endl;
	std::cout << "---------------" << std::endl;
	return 0;
}
