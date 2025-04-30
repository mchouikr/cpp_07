/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchouikr <mchouikr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 13:58:31 by mchouikr          #+#    #+#             */
/*   Updated: 2025/04/30 16:29:53 by mchouikr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T>

void	swap(T x, T y) {
	T temp;
	
	temp = x;
	x = y;
	y = temp;
}

template <typename U>

U const		min(U const x, U const y) {
	if (x > y)
		return y;
	return x;
}

template <typename V>

V const		max(V const x, V const y) {
	if (x > y)
		return x;
	return y;
}


#endif