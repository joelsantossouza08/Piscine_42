/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 08:48:02 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/03 14:16:29 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//struct s_stock_str
//{
//int size;
//char *str;
//char *copy;
//};
#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char chr)
{
	write(1, &chr, 1);
}

void	ft_putstr(char *str)
{
	if (!str)
		return ;
	while (*str)
		ft_putchar(*str++);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		return (ft_putstr("-2147483648"));
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb / 10)
		ft_putnbr(nb / 10);
	return (ft_putchar(nb % 10 + '0'));
}

void	ft_show_tab(struct s_stock_str *par)
{
	while (par->str)
	{
		ft_putstr(par->str);
		ft_putstr("\n");
		ft_putnbr(par->size);
		ft_putstr("\n");
		ft_putstr(par++->copy);
		ft_putstr("\n");
	}
}
//struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
//void	free_all_stocks(struct s_stock_str **stocks);
//#include<stdio.h>
//int	main(int argc, char **argv)
//{
//	struct s_stock_str	*stocks;
//
//	stocks = ft_strs_to_tab(argc, argv + 1);
//	ft_show_tab(stocks);
//	free_all_stocks(&stocks);
//	return (0);
//}
