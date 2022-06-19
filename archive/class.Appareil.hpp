/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.Appareil.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ski <ski@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 11:00:51 by ski               #+#    #+#             */
/*   Updated: 2022/06/19 12:45:56 by ski              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_APPAREIL_HPP
#define CLASS_APPAREIL_HPP
/* ************************************************************************** */
class Appareil
{
public:
	float const pi;
	int			temperature;

	Appareil(float const ext_pi);
	~Appareil(void);
	
	void ShowPi(void);
	void ShowTemp(void);
	void ChangeTemp(void) const;
	void AddTemp(void);
};
/* ************************************************************************** */
#endif