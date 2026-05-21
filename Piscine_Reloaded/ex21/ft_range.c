/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayperei <rayperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 09:27:16 by rayperei          #+#    #+#             */
/*   Updated: 2026/05/21 11:22:29 by rayperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	x;
	int	y;

	if (min < max)
	{
		ptr = (int *)malloc(sizeof(int) * (max - min));
		x = 0;
		y = min;
		while (x < max - min)
		{
			ptr[x] = y;
			y++;
			x++;
		}
		return (ptr);
	}
	return (0);
}
