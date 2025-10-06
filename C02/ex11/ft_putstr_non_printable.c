/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 14:12:53 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/09 12:09:56 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define HEX	"0123456789abcdef"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	get_base_place(int nbr, int base)
{
	int	base_place;

	base_place = 1;
	while (nbr / base)
	{
		base_place *= base;
		nbr /= base;
	}
	return (base_place);
}

void	ft_putnbr_base(int nbr, unsigned int width, char *base)
{
	unsigned int	nbr_len;
	int				base_place;
	int				base_len;

	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	base_len = ft_strlen(base);
	base_place = get_base_place(nbr, base_len);
	nbr_len = nbr;
	while (width && nbr_len / base_len)
	{
		nbr_len /= base_len;
		width--;
	}
	while (width-- > 1)
		ft_putchar('0');
	while (base_place)
	{
		ft_putchar(base[nbr / base_place % base_len]);
		base_place /= base_len;
	}
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str >= ' ' && *str <= '~')
			ft_putchar(*str++);
		else
		{
			ft_putchar('\\');
			ft_putnbr_base(*str++, 2, HEX);
		}
	}
}

//int	main(void)
//{
//	ft_putstr_non_printable("Ola\n\t\a\0esta bem?");
//}
