/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.AppleCollector.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sorakann <sorakann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 19:52:41 by sorakann          #+#    #+#             */
/*   Updated: 2022/06/19 20:14:14 by sorakann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "class.AppleCollector.hpp"

/* ************************************************************************** */
AppleCollector::AppleCollector(void)
{
	std::cout << "Construction" << std::endl;
	this->amount = 0;
}

AppleCollector::~AppleCollector(void)
{
	std::cout << "Deconstruction" << std::endl;
}

/* ************************************************************************** */
int AppleCollector::GetAmount(void)const
{
	return (this->amount);
}

void AppleCollector::SetAmount(int ext_amount)
{
	this->amount = ext_amount;
}

/* ************************************************************************** */
void AppleCollector::AddApple(int new_apple)
{
	this->amount =+ new_apple;
}

/* ************************************************************************** */
void AppleCollector::ShowAmount(void) const
{
	std::cout << "Amoune of apple : [" << this->amount << "]" << std::endl;	
}

/* ************************************************************************** */

bool AppleCollector::IsSameAmount(AppleCollector *ptr_machine)
{
	// if (this->amount == ptr_machine->GetAmount())
	if (this->amount == ptr_machine->amount)
		return (true);
	else
		return (false);	
}

/* ************************************************************************** */