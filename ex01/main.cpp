/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 18:45:02 by hchartie          #+#    #+#             */
/*   Updated: 2026/06/26 20:38:48 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main (void)
{
	int	n = 10;
	int	i = 0;
	std::string name = "zombie";
	Zombie	*horde;
	
	horde = zombieHorde(n, name);
	while (i < n)
	{
		horde[i].annouces();
		i++;
	}
	delete[] horde;
}
