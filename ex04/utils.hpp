/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 16:27:30 by hchartie          #+#    #+#             */
/*   Updated: 2026/07/27 07:39:54 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP
# include <fstream>
# include <iostream>
# include <iomanip>
# include <string>

void		ftPrint(std::string pStr);
void		ftPrintErr(std::string pErr);
int			ftStrncmp(std::string  pS1, std::string pS2, long n);
std::string	getNextLine(std::ifstream &pFile);
std::string	ftStrJoin(std::string pS1, std::string pS2);

#endif