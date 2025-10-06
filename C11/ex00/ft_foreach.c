/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 10:34:49 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/06 11:41:46 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	if (!tab || length <= 0 || !f)
		return ;
	while (length--)
		f(*tab++);
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
//int	main(void)
//{
//	int	tab[] = {1, 2, 3, 4};
//	int	size;
//
//	size = sizeof(tab) / sizeof(int);
//	ft_foreach(tab, size, ft_putnbr);
//	return (0);
//}
