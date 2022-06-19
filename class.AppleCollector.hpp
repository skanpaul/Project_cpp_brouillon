/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.AppleCollector.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ski <ski@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 16:42:16 by ski               #+#    #+#             */
/*   Updated: 2022/06/19 16:45:16 by ski              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef CLASS_APPLECOLLECTOR_HPP
# define CLASS_APPLECOLLECTOR_HPP
/* ************************************************************************** */
class AppleCollector
{
public:
	AppleCollector(void);
	~AppleCollector(void);

	int		GetAmount(void) const;
	void	SetAmount(int ext_amount);

private:
	int amount;
}
/* ************************************************************************** */
#endif