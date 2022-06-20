/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.AppleCollector.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ski <ski@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 16:42:16 by ski               #+#    #+#             */
/*   Updated: 2022/06/20 07:43:22 by ski              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_APPLECOLLECTOR_HPP
# define CLASS_APPLECOLLECTOR_HPP
/* ************************************************************************** */
class AppleCollector
{
public:
	AppleCollector(void);
	~AppleCollector(void);

	int		GetAmount(void) const;
	void	SetAmount(int ext_amount);
	
	void	ShowAmount(void) const;
	
	void	AddApple(int new_apple);
	bool	IsSameAmount(AppleCollector *ptr_machine);
	
	int		temperature;
private:
	int		_amount;
};
/* ************************************************************************** */
#endif