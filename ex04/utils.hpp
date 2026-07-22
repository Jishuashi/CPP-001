/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 16:27:30 by hchartie          #+#    #+#             */
/*   Updated: 2026/07/22 17:35:39 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP
# include <fstream>
# include <iostream>
# include <iomanip>

void		ftPrint(std::string pStr);
void		ftPrintErr(std::string pErr);
std::string	get_next_line(std::ifstream pFile);

#endif