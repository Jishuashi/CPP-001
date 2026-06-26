/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 18:46:35 by hchartie          #+#    #+#             */
/*   Updated: 2026/06/26 19:19:35 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string pName) : _name(pName) { }

Zombie::Zombie() { }

Zombie::~Zombie()
{
	std::cout << _name << std::endl;
}

void Zombie::annouces()
{
	std::cout << _name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
