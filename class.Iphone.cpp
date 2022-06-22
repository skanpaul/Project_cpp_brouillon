/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.Iphone.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ski <ski@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 12:05:07 by ski               #+#    #+#             */
/*   Updated: 2022/06/22 09:34:01 by ski              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "class.Iphone.hpp"

/* INSTANCE members ********************************************************* */
Iphone::Iphone(void)
{
	std::cout << "Constructon d'un iPhone" << std::endl;
	Iphone::_NumberOfIphone += 1;
}

Iphone::~Iphone(void)
{
	std::cout << "Destructon d'un iPhone" << std::endl;
	Iphone::_NumberOfIphone -= 1;
}

/* CLASS members ************************************************************ */
int Iphone::GetNumberOfIphone(void)
{
	return Iphone::_NumberOfIphone;
}

int Iphone::_NumberOfIphone = 0;

/* ************************************************************************** */
