/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardina <jcardina@student.42roma.it>      #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-01 14:15:13 by jcardina          #+#    #+#             */
/*   Updated: 2024-11-01 14:15:13 by jcardina         ###   ########jcardina  */
/*                                                                            */
/* ************************************************************************** */

#if !defined(ARRAY_HPP)
#define ARRAY_HPP

#include <exception>

template <typename T>
class Array
{
	private:
		T*				_arr;
		unsigned int	_lenght;
	public:
		~Array(){delete []_arr;};
		Array():_arr(new T()), _lenght(0){};
		Array(unsigned int lenght):_arr(new T[lenght]), _lenght(lenght){};
		Array(const Array& orig):_arr(new T[orig.size()]), _lenght(orig.size()){
			for(unsigned int i = 0; i < _lenght; i++)
				_arr[i] = orig._arr[i];
		};
		Array<T>& operator=(const Array<T>& rhs){
			if(this != &rhs){
				delete[] _arr;
				_arr = new T(rhs.size());
				_lenght = rhs.size();
				for(unsigned int i = 0; i < _lenght; i++)
					_arr[i] = static_cast<T>(rhs._arr[i]);
			}
			return *this;
		}

		unsigned int size() const {return _lenght;};

		T& operator[](unsigned int i){
			if(i >= _lenght)
				throw Array::memoryexception();
			return _arr[i];
		}

		class memoryexception : public std::exception{
			public:
				virtual const char* what() const throw() {return "can't access this memory nooooo :(";}
		};
};

#endif // ARRAY_HPP


