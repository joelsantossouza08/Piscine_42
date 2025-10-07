/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 18:57:46 by joesanto          #+#    #+#             */
/*   Updated: 2025/10/07 16:46:23 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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
		ft_putchar(*str++);
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
