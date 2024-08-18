/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreal-de <rreal-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 11:05:01 by mmariano          #+#    #+#             */
/*   Updated: 2024/08/17 17:17:11 by rreal-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_a(char a)
{
	write(1, &a, 1);
}

void	ft_putchar_b(char b)
{
	write(1, &b, 1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
