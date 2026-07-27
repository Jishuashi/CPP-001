/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 16:25:40 by hchartie          #+#    #+#             */
/*   Updated: 2026/07/27 07:36:16 by hchartie         ###   ########.fr       */
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

std::string getNextLine(std::ifstream &pFile)
{
	std::string line;

	std::getline(pFile, line);
	if (!pFile.eof())
		line.append("\n");
	return (line);
}

int	ftStrncmp(std::string  pS1, std::string pS2, long n)
{
	long	i;

	i = 0;
	while (i < n && pS1[i] != '\0' && pS2[i] != '\0' && pS1[i] == pS2[i])
		i++;
	if (i == n)
		return (0);
	return (pS1[i] - pS2[i]);
}

std::string	ftStrJoin(std::string pS1, std::string pS2)
{
	std::string	res;
	res.append(pS1);
	res.append(pS2);
	return (res);
}