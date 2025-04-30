/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchouikr <mchouikr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 16:32:45 by mchouikr          #+#    #+#             */
/*   Updated: 2025/04/30 17:14:12 by mchouikr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	printer(int &x) {
	std::cout << x << std::endl;
}

int main() {
	
	int array[] = {1, 2, 3};
	int *arrayptr;
	arrayptr = array;

	iter(arrayptr, 3, printer);
}