/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 15:11:54 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/09 14:31:04 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define HEX		"0123456789abcdef"
#define FIELD	16

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthex(long int nbr, int width)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr / 16 == 0)
		while (width-- > 1)
			ft_putchar('0');
	if (nbr / 16)
		ft_puthex(nbr / 16, width - 1);
	if (nbr % 16 < 10)
		ft_putchar(nbr % 16 + '0');
	else
		ft_putchar(nbr % 16 - 10 + 'a');
}

void	ft_print_row(char *buf, unsigned int size)
{
	unsigned int	i;

	i = -1;
	while (++i < FIELD)
	{
		if (i < size)
			ft_puthex(buf[i], 2);
		else
			write(1, "  ", 2);
		if ((i + 1) % 2 == 0)
			ft_putchar(' ');
	}
	while (size--)
	{
		if (*buf >= ' ' && *buf <= '~')
			ft_putchar(*buf);
		else
			ft_putchar('.');
		buf++;
	}
	ft_putchar('\n');
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	void	*ptr;
	int		len;

	if (!size)
		return (addr);
	ptr = addr;
	len = -1;
	while (++len < FIELD)
	{
		if (!size--)
			break ;
		if (len + 1 == FIELD)
		{
			ft_puthex((long int)ptr, FIELD);
			write(1, ": ", 2);
			ft_print_row(ptr, len + 1);
			ptr += len + 1;
			len = -1;
		}
	}
	ft_puthex((long int)ptr, FIELD);
	write(1, ": ", 2);
	ft_print_row(ptr, len);
	return (addr);
}

//int	main(void)
//{
//	char	str[] = "joel joel saouzai.oj\n\n, \n\t";
//
//	ft_print_memory(str, 0);
//	return (0);
//}
