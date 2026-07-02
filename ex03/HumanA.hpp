/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 15:21:27 by hchartie          #+#    #+#             */
/*   Updated: 2026/07/02 17:32:13 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <iostream>
# include "Weapon.hpp"
class HumanA
{
private:
    Weapon      _weapon;
    std::string _name;
public:
    HumanA(std::string pName);
    ~HumanA();
};

#endif