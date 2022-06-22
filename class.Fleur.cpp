/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.Fleur.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ski <ski@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 11:16:28 by ski               #+#    #+#             */
/*   Updated: 2022/06/22 12:58:15 by ski              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "class.Fleur.hpp"

/* ************************************************************************** */
Fleur::Fleur(void)
{
	this->NombreFleur = 0;
	std::cout << "Construction | Nombre de fleur: " << this->NombreFleur << std::endl;
	
}

Fleur::~Fleur(void)
{
	this->NombreFleur = 0;
	std::cout << "Destruction | Nombre de fleur: " << this->NombreFleur << std::endl;
}

void Fleur::Grandir(void) const
{
	std::cout << "La fleur grandit" << std::endl;
}

/* ************************************************************************** */




/* ************************************************************************** */