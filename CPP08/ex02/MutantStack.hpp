#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>


template <typename T>
class MutantStack : public std::stack<T>{
	public:
	typedef std::stack<T> stack;
	typedef typename stack::container_type container;
	typedef typename container::iterator iterator;

	MutantStack(): stack(){}
	~MutantStack(){}
	
	MutantStack(const stack &src) : stack(src){}

	MutantStack& operator=(const stack& src){
		if (this != src)
			std::stack<T>::operator=(src);
		return *this;
	}

	iterator begin(){
		return this->c.begin();
	}

	iterator end(){
		return this->c.end();
	}
};

#endif // MUTANTSTACK_HPP