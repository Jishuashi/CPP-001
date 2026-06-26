/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 19:34:35 by hchartie          #+#    #+#             */
/*   Updated: 2026/06/26 19:39:38 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChump(std::string pName)
{
	Zombie *zombie;

	zombie = new Zombie(pName);	
	zombie->annouces();
	delete zombie;
}
