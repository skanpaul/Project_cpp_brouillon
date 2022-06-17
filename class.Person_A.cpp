/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.Person_A.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ski <ski@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:55:57 by ski               #+#    #+#             */
/*   Updated: 2022/06/17 14:14:40 by ski              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "class.Person_A.hpp"

/* ************************************************************************** */
Person_A::Person_A(char ext_lettre, int ext_age)
{
	std::cout << "CONSTRUCTION" << std::endl;
	this->age = ext_age;
	this->lettre = ext_lettre;

	std::cout << "Le lettre inscrit est: " << this->lettre << std::endl;
	std::cout << "L'age inscrit est: " << this->age << std::endl;
	this->dormir();
	
}
/* ************************************************************************** */
Person_A::~Person_A(void)
{
	std::cout << "DESTRUCTION" << std::endl;
}
/* ************************************************************************** */
void Person_A::manger(void)
{
	std::cout << this->lettre << " est en train de manger" << std::endl;	
}
/* ************************************************************************** */
void Person_A::dormir(void)
{
	std::cout << this->lettre << " est en train de dormir" << std::endl;
}
/* ************************************************************************** */