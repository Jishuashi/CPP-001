/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 15:23:05 by hchartie          #+#    #+#             */
/*   Updated: 2026/07/22 16:11:27 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"
# include <iostream>

class HumanB
{
private:
    std::string _name;
    Weapon      *_weapon;
public:
    HumanB(std::string pName);
    ~HumanB();

    void        attack();
    void        setWeapon(Weapon &pWeapon);
};

#endif