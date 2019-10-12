/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 22:37:41 by aymaatou          #+#    #+#             */
/*   Updated: 2019/04/16 10:52:51 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_printer(int nbr1, int nbr2);

int		ft_putchar(char c);

void	ft_print_comb2(void)
{
	int nbr1;
	int nbr2;

	nbr1 = 0;
	while (nbr1 <= 98)
	{
		nbr2 = nbr1 + 1;
		while (nbr2 <= 99)
		{
			ft_printer(nbr1, nbr2);
			nbr2++;
		}
		nbr1++;
	}
}

void	ft_printer(int nbr1, int nbr2)
{
	ft_putchar(nbr1 / 10 + 48);
	ft_putchar(nbr1 % 10 + 48);
	ft_putchar(' ');
	ft_putchar(nbr2 / 10 + 48);
	ft_putchar(nbr2 % 10 + 48);
	if (nbr1 + nbr2 != 197)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}
