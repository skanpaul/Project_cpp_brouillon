/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ski <ski@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 07:52:55 by ski               #+#    #+#             */
/*   Updated: 2022/06/20 17:25:01 by ski              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "class.Iphone.hpp"

void fct1(void);

/* ************************************************************************** */
int main(void)
{
	int b;
	
	std::cout << "CLASS: Nombre d'iPhone: "<< Iphone::GetNumberOfIphone() << std::endl;
	
	Iphone Aaa;	

	std::cout << "Nombre d'iPhone: "<< Iphone::GetNumberOfIphone() << std::endl;
	
	return (0);	
}

/* ************************************************************************** */