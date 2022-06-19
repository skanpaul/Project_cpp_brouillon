/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.Appareil.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ski <ski@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 11:08:13 by ski               #+#    #+#             */
/*   Updated: 2022/06/19 12:47:41 by ski              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "class.Appareil.hpp"

/* ************************************************************************** */
Appareil::Appareil(float const ext_pi)
:pi(ext_pi)
{
	std::cout << "Construction" << std::endl;
	this->temperature = 37;
}

/* ************************************************************************** */
Appareil::~Appareil(void)
{
	std::cout << "Deconstruction" << std::endl;	
}

/* ************************************************************************** */
void Appareil::ShowPi(void)
{
	std::cout << "Pi = " << this->pi << std::endl;	
}

/* ************************************************************************** */
void Appareil::ShowTemp(void)
{
	std::cout << "Temperature = " << this->temperature << std::endl;	
}

void Appareil::ChangeTemp(void) const
{
	std::cout << "Temperature = " << this->temperature << std::endl;	
	// ==> avec le mot-clé "const", 
	// il n'est pas possible de modifier les attributs
	// this->temperature = 25;
}

void Appareil::AddTemp(void) 
{
	this->temperature = this->temperature + 5;
}

/* ************************************************************************** */