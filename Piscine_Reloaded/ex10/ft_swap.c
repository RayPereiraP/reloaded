/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayperei <rayperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 14:44:18 by rayperei          #+#    #+#             */
/*   Updated: 2026/05/13 14:50:03 by rayperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>
{
	int n1;
	int n2;
	
	n1 = 24;
	n2 = 48;
	
	printf("antes a era %d, b = %d\n", n1, n2);
	ft_swap(&n1, &n2);
	printf("depois se tornou %d, b = %d\n", n1, n2);
	return (0);
}
*/
