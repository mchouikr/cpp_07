/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchouikr <mchouikr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 11:17:22 by mchouikr          #+#    #+#             */
/*   Updated: 2025/05/05 12:12:31 by mchouikr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <cstddef>
#include <stdexcept>
#include <cstdlib>
#include <ctime>

template < typename T >

class Array {

private:
	T* _element;
	unsigned int _size;
	
public:
	//constructor
	Array(unsigned int n) : _element(new T[n]), _size(n) {
		for (size_t i = 0; i < n; i++)
        	_array[i] = T();
	}

	//canonical form
	Array() : _element(NULL), _size(0) {}

	~Array() {
		if (this->_element != NULL)
			delete[] this->_element;
	}
	
	Array( const Array &src ) : _element(new T[src._size]), _size(src._size) {
		for (unsigned int i = 0; i < _size; i++)
			this->_element[i] = src._element[i];
	}
	
	Array<T> &operator=(const Array &rhs) {
		if (this != &rhs)
		{
			T *tmp = new T[rhs._size];
			for (unsigned int i = 0; i < _size; i++)
				tmp[i] = rhs._element[i];
			delete[] this->_element;
			this->_element = tmp;
			this->_size = rhs._size;
		}
		return (*this);
	}	
	//subscript operator overload
	T& operator[](unsigned int index) {
		if (index >= _size)
			throw std::out_of_range("Index out of range");
		return (_element[index]);
	}
	
	const T &operator[](unsigned int index) const  {
		if (index >= _size)
			throw std::out_of_range("Index out of range");
		return (_element[index]);
	}
	
	//member function
	unsigned int size( void ) const {
		return (this->_size);
	}
};

#endif