#include "Span.hpp"

Span::Span(): N_(DEFAULT_N), free_space_(N_)
{
}

Span::Span(size_t N): N_(N), free_space_(N_)
{
}

Span::~Span()
{
}

Span::Span(const Span& source)
{
	*this = source;
}

Span& Span::operator=(const Span &source)
{
	if (!container_.empty())
		container_.clear();
	N_ = source.N_;
	free_space_ = source.free_space_;
	for (size_t i = 0; i < source.container_.size(); i++)
		container_.push_back(source.container_[i]);
	return *this;
}

void	Span::getInfo()
{
	if (container_.empty())
		std::cout << "The container is empty." << std::endl;
	else
	{
		std::cout << "Elements:";
		std::vector<int>::iterator iter = container_.begin();
		while (iter != container_.end())
			std::cout << " " << *iter++;
		std::cout << std::endl;
	}
	std::cout << "Free space: " << free_space_ << std::endl;;
}

void	Span::addNumber(int value)
{
	if (!free_space_)
		throw LackOfSpaceException();
	container_.push_back(value);
	free_space_--;
}

void	Span::fillArray(size_t count)
{
	srand(time(nullptr));
	if (free_space_ < count)
		throw LackOfSpaceException();
	while (count--)
	{
		container_.push_back(rand());
		free_space_--;
	}
}

unsigned int	Span::shortestSpan()
{
	if (container_.size() < 2)
		throw FewNumbersException();
	std::vector<int> copy = container_;
	std::sort(copy.begin(), copy.end());
	std::vector<int>::iterator iter = copy.begin();
	unsigned int span = std::labs(*iter - *(++iter));
	unsigned int result = span;
	while (iter != copy.end())
	{
		span = std::labs(*iter - *(++iter));
		result = std::min(span, result);
	}
	return result;
}

unsigned int	Span::longestSpan()
{
	if (container_.size() < 2)
		throw FewNumbersException();
	int min = *min_element(container_.begin(), container_.end());
	int max = *max_element(container_.begin(), container_.end());
	return max - min;
}

const char* Span::LackOfSpaceException::what() const throw()
{
	return "There are no free space";
}

const char* Span::FewNumbersException::what() const throw()
{
	return "Too few numbers";
}


