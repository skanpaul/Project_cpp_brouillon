/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ski <ski@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 07:52:55 by ski               #+#    #+#             */
/*   Updated: 2022/06/20 07:56:20 by ski              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "class.AppleCollector.hpp"

/* ************************************************************************** */
int main(void)
{
	AppleCollector m_1;
	AppleCollector m_2;

	m_1.SetAmount(0);
	m_1.ShowAmount();
	m_1.AddApple(5);
	m_1.ShowAmount();

	m_2.SetAmount(5);
	m_2.ShowAmount();


	if (m_1.IsSameAmount(&m_2))
		std::cout << "m_1 has the same amount of apple thant m_2" << std::endl;
	else
		std::cout << "m_1 DOESN'T HAVE the same amount of apple thant m_2" << std::endl;
		

	return (0);	
}

/* ************************************************************************** */