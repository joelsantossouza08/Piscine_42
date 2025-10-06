/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 10:36:56 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/06 11:48:27 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*new;

	if (!tab || length <= 0 || !f)
		return (0);
	new = malloc(sizeof(int) * length);
	while (length--)
		new[length] = f(tab[length]);
	return (new);
}

//#include <unistd.h>
//void	ft_putchar(char c)
//{
//	write(1, &c, 1);
//}
//void	ft_putstr(char *str)
//{
//	if (!str)
//		return ;
//	while (*str)
//		ft_putchar(*str++);
//}
//void	ft_putnbr(int nb)
//{
//	if (nb == -2147483648)
//		return (ft_putstr("-2147483648"));
//	if (nb < 0)
//	{
//		ft_putchar('-');
//		nb = -nb;
//	}
//	if (nb / 10)
//		ft_putnbr(nb / 10);
//	return (ft_putchar(nb % 10 + '0'));
//}
//int	ft_sq(int nbr)
//{
//	return nbr * nbr;
//}
//void	ft_foreach(int *tab, int size, void (*f)(int));
//int	main(void)
//{
//#include <stdio.h>
//	int	tab[] = {1, 2, 3, 4};
//	int	size;
//	int	*new;
//
//	size = sizeof(tab) / sizeof(int);
//	ft_foreach(tab, size, ft_putnbr);
//	new = ft_map(tab, size, ft_sq);
//	printf("\n");
//	ft_foreach(new, size, ft_putnbr);
//	free(new);
//	return (0);
//}
