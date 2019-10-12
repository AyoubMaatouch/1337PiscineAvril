/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymaatou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 15:34:07 by aymaatou          #+#    #+#             */
/*   Updated: 2019/04/26 13:05:58 by aymaatou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;

	argc--;
	while (argc >= 1)
	{
		i = 0;
		while (argv[argc][i] != '\0')
		{
			ft_putchar(argv[argc][i]);
			i++;
		}
		ft_putchar('\n');
		argc--;
	}
	return (0);
}
