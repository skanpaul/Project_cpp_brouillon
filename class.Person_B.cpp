/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.Person_B.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ski <ski@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 14:20:39 by ski               #+#    #+#             */
/*   Updated: 2022/06/17 14:24:23 by ski              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "class.Person_B.hpp"
/* ************************************************************************** */
Person_B::Person_B(char ext_lettre, int ext_age): lettre(ext_lettre), age(ext_age)
{
	std::cout << "CONSTRUCTION" << std::endl;
	std::cout << "Le lettre inscrit est: " << this->lettre << std::endl;
	std::cout << "L'age inscrit est: " << this->age << std::endl;
	this->dormir();		
}

Person_B::~Person_B(void)
{
	std::cout << "DESTRUCTION" << std::endl;
}

void Person_B::manger(void)
{
	std::cout << this->lettre << " est en train de manger" << std::endl;	
}

void Person_B::dormir(void)
{
	std::cout << this->lettre << " est en train de dormir" << std::endl;
}

/* ************************************************************************** */