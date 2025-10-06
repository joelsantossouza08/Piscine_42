/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 18:57:46 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/01 13:54:59 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	if (!s1 || !s2)
		return (0);
	while (*s1 == *s2)
	{
		if (!*s1)
			return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort_str_tab(char **tab, int size)
{
	int		i;
	char	*temp;

	if (!tab || size < 0)
		return ;
	while (--size >= 0)
	{
		i = size;
		while (--i >= 0)
		{
			if (ft_strcmp(tab[i], tab[size]) > 0)
			{
				temp = tab[size];
				tab[size] = tab[i];
				tab[i] = temp;
			}
		}
	}
}

void	ft_putstr(char *str)
{
	if (!str)
		return ;
	while (*str)
		write(1, str++, 1);
}

int	main(int argc, char **argv)
{
	ft_sort_str_tab(argv + 1, argc - 1);
	while (*++argv)
	{
		ft_putstr(*argv);
		ft_putstr("\n");
	}
	return (0);
}
