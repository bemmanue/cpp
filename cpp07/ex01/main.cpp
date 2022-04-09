#include "iter.hpp"

int main()
{
	std::cout << "Int:" << std::endl;
	int array1[] = {0, 1, 2, 3, 4};
	iter(array1, sizeof(array1) / sizeof(*array1), print);
	std::cout << "----------" << std::endl;

	std::cout << "Float:" << std::endl;
	float array2[] = {0.6f, 14, 4.5f, 3.4f, 4.4f};
	iter(array2, sizeof(array2) / sizeof(*array2), print);
	std::cout << "----------" << std::endl;

	std::cout << "Double:" << std::endl;
	double array3[] = {5.7546375, 7.4, 0.003, 5.89};
	iter(array3, sizeof(array3) / sizeof(*array3), print);
	std::cout << "----------" << std::endl;

	std::cout << "String:" << std::endl;
	std::string array4[] = {"privet", "poka", "lala"};
	iter(array4, sizeof(array4) / sizeof(*array4), print);
	return 0;
}
