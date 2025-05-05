/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchouikr <mchouikr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 16:32:45 by mchouikr          #+#    #+#             */
/*   Updated: 2025/05/05 11:08:38 by mchouikr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void	printer(T const &x) {
	std::cout << x << std::endl;
}

int main() {
	
	int array[] = {1, 2, 3};
	int *arrayptr;
	arrayptr = array;

	iter(arrayptr, 3, printer);

	std::string array2[] = {"mdr", "lol", "coucou"};
	std::string *arrayptr2;
	arrayptr2 = array2;

	iter(arrayptr2, 3, printer);

	return 0;
}