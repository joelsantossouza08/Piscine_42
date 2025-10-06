/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 18:58:13 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/10 18:58:51 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

void	ft_fputchar(int fd, char c)
{
	write(fd, &c, 1);
}

void	ft_fputstr(int fd, char *str)
{
	if (fd < 0 || !str)
		return ;
	while (*str)
		ft_fputchar(fd, *str++);
}

void	ft_puthex(long int nbr, int width)
{
	int	hex;

	if (nbr < 0)
	{
		ft_fputchar(STDOUT, '-');
		nbr = -nbr;
	}
	if (nbr / 16 == 0)
		while (width-- > 1)
			ft_fputchar(STDOUT, '0');
	else
		ft_puthex(nbr / 16, width - 1);
	hex = nbr % 16;
	if (hex < 10)
		ft_fputchar(STDOUT, hex + '0');
	else
		ft_fputchar(STDOUT, hex - 10 + 'a');
}
