/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 17:36:35 by aymaatou          #+#    #+#             */
/*   Updated: 2019/04/23 11:07:32 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int result;

	result = nb;
	if (nb == 0)
		return (1);
	if (nb > 12 || nb < 0)
		return (0);
	while (nb > 1)
	{
		result = result * (nb - 1);
		nb--;
	}
	return (result);
}
