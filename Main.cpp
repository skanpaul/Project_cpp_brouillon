/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ski <ski@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 07:52:55 by ski               #+#    #+#             */
/*   Updated: 2022/06/23 10:29:55 by ski              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "class.Fleur.hpp"

/* ************************************************************************** */
int main(void)
{
	Fleur	Rose;
	Fleur	Coquelicot;

	
	void (Fleur::*ptr_fct)(void) const;

	ptr_fct = &Fleur::Grandir;

	(Rose.*ptr_fct)();
	(Coquelicot.*ptr_fct)();
	

	return (0);	
}

/* ************************************************************************** */


// Fleur	*ptr_instance;

// // Utilisation du pointeur d'instance
// ptr_instance = &Coquelicot;
// ptr_instance->NombreFleur = 36;
// ptr_instance->Grandir();
// std::cout << "Le nombre de coquelicot est " << Coquelicot.NombreFleur << std::endl;
// (*ptr_instance).NombreFleur = 43;
// std::cout << "Le nombre de coquelicot est " << Coquelicot.NombreFleur << std::endl;





// // Création d'un pointeur d'attribut (pour toutes les instances)
// int		Fleur::*ptr_n_fleur;
// // Affectation du pointeur à un attribut de la classe/instance
// ptr_n_fleur = &Fleur::NombreFleur;
// // Utilisation du pointeur d'attribut
// Rose.*ptr_n_fleur = 6;
// Coquelicot.*ptr_n_fleur = 12;
// std::cout << "Le nombre de rose est " << Rose.NombreFleur << std::endl;
// std::cout << "Le nombre de coquelicot est " << Coquelicot.NombreFleur << std::endl;