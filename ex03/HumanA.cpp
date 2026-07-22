#include "HumanA.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 15:21:07 by hchartie          #+#    #+#             */
/*   Updated: 2026/07/02 15:21:10 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

HumanA::HumanA(std::string pName, Weapon &pWeapon) : _name(pName), _weapon(pWeapon) { }

HumanA::~HumanA() { }

void HumanA::attack()
{
    std::cout << _name << " attack with thier " << _weapon.getType() << std::endl;
}
