/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 12:52:11 by hchartie          #+#    #+#             */
/*   Updated: 2026/07/02 15:11:41 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string brain = "HI THIS IS BRAIN";
    std::string *brainPTR = &brain;
    std::string &brainREF = brain;

    std::cout << "String Addr: " << &brain << std::endl;
    std::cout << "StringPTR Addr: " << brainPTR << std::endl;
    std::cout << "StringREF Addr: " << &brainREF << std::endl;
    
    std::cout << std::endl;

    std::cout << "String Value: " << brain << std::endl;
    std::cout << "StringPTR Value : " << *brainPTR << std::endl;
    std::cout << "StringREF Value : " << brainREF << std::endl;
}
