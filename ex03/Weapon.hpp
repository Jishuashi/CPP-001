/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 15:17:57 by hchartie          #+#    #+#             */
/*   Updated: 2026/07/22 16:11:27 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>
# include <iostream>

class Weapon
{
private:
    std::string _type;
public:
    Weapon(const std::string &pType);
    Weapon();
    ~Weapon();

    void                setType(const std::string &pType);
    const std::string   &getType() const;
};

#endif


