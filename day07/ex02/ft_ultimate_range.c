/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:19:01 by aymaatou          #+#    #+#             */
/*   Updated: 2019/05/03 01:30:30 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int length;
	int *tab;
	int i;

	i = 0;
	if (min >= max)
		return (0);
	length = max - min;
	tab = (int *)malloc(sizeof(int) * length);
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (*tab);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int length;

	length = 0;
	if (min >= max)
		return (0);
	length = max - min - 1;
	range = ft_range(min, max);
	return (length);
}
