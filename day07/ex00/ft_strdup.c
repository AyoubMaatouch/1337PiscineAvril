/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 21:23:11 by aymaatou          #+#    #+#             */
/*   Updated: 2019/05/03 01:33:17 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*result;

	result = (char *)malloc(sizeof(*src) * (ft_strlen(src) + 1));
	i = 0;
	while (src[i] != '\0')
	{
		result[i] = src[i];
		i++;
	}
	return (result);
}
