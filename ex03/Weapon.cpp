#include "Weapon.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 15:18:01 by hchartie          #+#    #+#             */
/*   Updated: 2026/07/02 15:18:03 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Weapon::Weapon(const std::string &pType) : _type(pType) { }

Weapon::Weapon( ) { }

Weapon::~Weapon( ) { }

void	Weapon::setType(const std::string &pType)
{
	_type = pType;
}

const std::string	&Weapon::getType() const
{
	return (_type);
}