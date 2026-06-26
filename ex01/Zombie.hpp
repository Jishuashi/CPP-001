/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 18:45:35 by hchartie          #+#    #+#             */
/*   Updated: 2026/06/26 20:57:41 by hchartie         ###   ########.fr       */
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
		Zombie();
		~Zombie();

		void annouces();
		void setName(std::string pName);
};

Zombie *zombieHorde(int pN, std::string pName);

#endif