/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 10:56:12 by aymaatou          #+#    #+#             */
/*   Updated: 2019/04/20 15:58:13 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	unsigned int	number;
	int				sign;

	if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar('-');
	}
	number = nb;
	if (number >= 9)
	{
		ft_putnbr(number / 10);
		ft_putchar(number % 10 + 48);
	}
	else
		ft_putchar(number % 10 + 48);
}
