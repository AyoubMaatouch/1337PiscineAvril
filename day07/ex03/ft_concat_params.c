/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 15:11:18 by aymaatou          #+#    #+#             */
/*   Updated: 2019/05/03 01:26:41 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char **argv, int argc)
{
	int i;
	int j;
	int index;

	index = 0;
	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			i++;
		}
		index += i;
		j++;
	}
	return (index);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		y;
	char	*value;

	i = 1;
	y = 0;
	value = (char *)malloc(sizeof(char) * ft_strlen(argv, argc) + 1);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			value[y] = argv[i][j];
			j++;
			y++;
		}
		value[y++] = '\n';
		i++;
	}
	return (value);
}
