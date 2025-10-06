/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 12:49:59 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/06 21:47:54 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "do_op.h"

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

static void	ft_fputchar(int fd, char c)
{
	write(fd, &c, 1);
}

void	ft_fputstr(int fd, char *str)
{
	if (!str || fd < 0)
		return ;
	while (*str)
		ft_fputchar(fd, *str++);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		return (ft_fputstr(STDOUT, "-2147483648"));
	if (nb < 0)
	{
		ft_fputchar(STDOUT, '-');
		nb = -nb;
	}
	if (nb / 10)
		ft_putnbr(nb / 10);
	return (ft_fputchar(STDOUT, nb % 10 + '0'));
}
