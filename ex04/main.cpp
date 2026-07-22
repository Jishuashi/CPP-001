/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 16:24:22 by hchartie          #+#    #+#             */
/*   Updated: 2026/07/22 18:03:12 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int main(int ac, char const *av[])
{
    if (ac != 4)
    {
        if (ac < 4)
            ftPrintErr("Error : less than 3 arg");
        else
            ftPrintErr("Error : more than 3 arg");
        return (1);
    }

    std::ifstream 	file(av[1]);
	std::

 	if (!file.is_open())
	{
		std::string err;

		err.append(av[1]);
		err.append(" : file not found or don't have permission");
		ftPrintErr(err);
	}
	ftPrint("\n");
	
    (void) av;
    return 0;
}
