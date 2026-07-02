/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 15:17:57 by hchartie          #+#    #+#             */
/*   Updated: 2026/07/02 17:29:25 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon
{
private:
    std::string _type;
public:
    Weapon(std::string pType);
    ~Weapon();
    void        setType(std::string pType);
    std::string getType();
};

#endif


