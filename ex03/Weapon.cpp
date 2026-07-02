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

Weapon::Weapon(std::string pType) : _type(pType) { }

Weapon::~Weapon() { }

void Weapon::setType(std::string pType)
{
    _type = pType;
}

std::string Weapon::getType()
{
    return (_type);
}