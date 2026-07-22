/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 16:25:40 by hchartie          #+#    #+#             */
/*   Updated: 2026/07/22 17:34:55 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

void    ftPrint(std::string pStr)
{
    std::cout << pStr << std::endl;
}

void    ftPrintErr(std::string pErr)
{
    std::cerr << pErr << std::endl; 
}

std::string get_next_line(std::ifstream pFile)
{
    static char buff[1];
    std::string	res;

    while (!pFile.read(buff, 1) || buff[0] == '\n')
		res.append(buff);
    return (res);
}