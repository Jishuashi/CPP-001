/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 15:21:27 by hchartie          #+#    #+#             */
/*   Updated: 2026/07/22 16:11:27 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <iostream>
# include "Weapon.hpp"
class HumanA
{
private:
    std::string _name;
    Weapon      &_weapon;
public:
    HumanA(std::string pName, Weapon &pWeapon);
    ~HumanA();

    void    attack();
};

#endif