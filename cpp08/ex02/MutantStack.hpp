#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>

template<class T, class Container = std::deque<T> >
class	MutantStack: public std::stack<T, Container>
{
public:
	MutantStack(): std::stack<T, Container>()
	{
	}
	~MutantStack()
	{
	}
	MutantStack<T, Container> (MutantStack<T, Container> const &source)
	{
		*this = source;
	}
	MutantStack<T, Container>& operator=(MutantStack<T, Container> const &source)
	{
		if (this != &source)
			this->c = source.c;
		return *this;
	}

	typedef typename Container::iterator iterator;
	typedef typename Container::const_iterator const_iterator;
	typedef typename Container::reverse_iterator reverse_iterator;
	typedef typename Container::const_reverse_iterator const_reverse_iterator;

	iterator				begin() {return this->c.begin();}
	iterator				end() {return this->c.end();}
	const_iterator			cbegin() {return this->c.cbegin();}
	const_iterator			cend() {return this->c.cend();}
	reverse_iterator		rbegin() {return this->c.rbegin();}
	reverse_iterator		rend() {return this->c.rend();}
	const_reverse_iterator	crbegin() {return this->c.crbegin();}
	const_reverse_iterator	crend() {return this->c.crend();}
};

#endif
