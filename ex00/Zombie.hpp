/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 18:45:35 by hchartie          #+#    #+#             */
/*   Updated: 2026/06/26 19:35:34 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIES_HPP
# define ZOMBIES_HPP
# include <iostream>

class Zombie
{
private:
	std::string	_name;
public:
	Zombie(std::string pName);
	~Zombie();

	void annouces();
};

Zombie *newZombie(std::string pName);
void	randomChump(std::string pName);

#endif