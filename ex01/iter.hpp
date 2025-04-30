/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchouikr <mchouikr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 16:32:43 by mchouikr          #+#    #+#             */
/*   Updated: 2025/04/30 16:59:06 by mchouikr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>

void	iter(T* array, std::size_t length, void (*f)(T&)) {
    for (std::size_t i = 0; i < length; ++i)
        f(array[i]);
}


#endif