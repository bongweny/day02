/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bongweny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 11:49:55 by bongweny          #+#    #+#             */
/*   Updated: 2020/06/19 14:33:19 by bongweny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistdio.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}
void ft_ print_alphabet(void)

{
	char letter;
	letter = 'a';
	while (letter <= 'z')
{ ft_putchar(letter);
   return(0);
}   
