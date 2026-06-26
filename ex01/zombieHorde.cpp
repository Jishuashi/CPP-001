/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */ 
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 19:48:16 by hchartie          #+#    #+#             */
/*   Updated: 2026/06/26 21:00:27 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>

Zombie *zombieHorde(int pN, std::string pName)
{
	int	i = 0;
	Zombie	*horde = new Zombie[pN];

	while (i < pN)
	{
		std::stringstream ss;
		ss << " " << i;
		horde[i].setName(pName + ss.str());
		i++;
	}
	return (&horde[0]);
}