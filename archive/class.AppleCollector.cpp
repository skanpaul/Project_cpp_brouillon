/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.AppleCollector.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ski <ski@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 19:52:41 by sorakann          #+#    #+#             */
/*   Updated: 2022/06/20 07:56:26 by ski              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "class.AppleCollector.hpp"

/* ************************************************************************** */
AppleCollector::AppleCollector(void)
{
	std::cout << "Construction" << std::endl;
	this->_amount = 0;
}

AppleCollector::~AppleCollector(void)
{
	std::cout << "Deconstruction" << std::endl;
}

/* ************************************************************************** */
int AppleCollector::GetAmount(void)const
{
	return (this->_amount);
}

void AppleCollector::SetAmount(int ext_amount)
{
	this->_amount = ext_amount;
}

/* ************************************************************************** */
void AppleCollector::AddApple(int new_apple)
{
	this->_amount += new_apple;
}

/* ************************************************************************** */
void AppleCollector::ShowAmount(void) const
{
	std::cout << "Amoune of apple : [" << this->_amount << "]" << std::endl;	
}

/* ************************************************************************** */

bool AppleCollector::IsSameAmount(AppleCollector *ptr_machine)
{
	if (this->_amount == ptr_machine->GetAmount())
	// if (this->_amount == ptr_machine->_amount)
		return (true);
	else
		return (false);	
}

/* ************************************************************************** */