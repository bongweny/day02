/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bongweny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 11:49:55 by bongweny          #+#    #+#             */
/*   Updated: 2020/06/19 16:00:34 by bongweny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)	
{
	write(1, &c, 1);
}

void ft_print_alphabet(void)
{
	char letter;

   	letter = 'z'; 
	while (letter >= 'a')
	{
	ft_putchar(letter);
	letter--;
	}
}

int main(void)
{
	ft_print_alphabet();
	return 0;
}
