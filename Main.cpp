/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ski <ski@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 07:52:55 by ski               #+#    #+#             */
/*   Updated: 2022/06/16 14:11:34 by ski              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/* ************************************************************************** */
int g_age = 38;
int fct(void) {return 3;}

/* ************************************************************************** */
namespace aaa
{
	int g_age = 12;
	int fct(void) {return 27;}
}

namespace bbb
{
	int g_age = 99;
	int fct(void) {return 33;}
}

namespace ccc = bbb;

/* ************************************************************************** */
int main(void)
{
printf("g_age: [%d]\n", g_age);
printf("fct(): [%d]\n", fct());
printf("\n");

printf("aaa::g_age [%d]\n", aaa::g_age);
printf("aaa::fct() [%d]\n", aaa::fct());
printf("\n");

printf("bbb::g_age [%d]\n", bbb::g_age);
printf("bbb::fct() [%d]\n", bbb::fct());
printf("\n");

printf("ccc::g_age [%d]\n", ccc::g_age);
printf("ccc::fct() [%d]\n", ccc::fct());
printf("\n");
}

/* ************************************************************************** */