/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rayperei <rayperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 15:50:57 by rayperei          #+#    #+#             */
/*   Updated: 2026/05/14 14:32:59 by rayperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	qarg;
	int	letter;

	qarg = 1;
	while (qarg < argc)
	{
		letter = 0;
		while (argv[qarg][letter] != '\0')
		{
			ft_putchar(argv[qarg][letter]);
			letter++;
		}
		ft_putchar('\n');
		qarg++;
	}
	return (0);
}
