/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaim-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 11:34:49 by jpaim-so          #+#    #+#             */
/*   Updated: 2025/08/31 11:54:42 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define CORNER_LU	'o'
#define HORIZONTAL	'-'
#define CORNER_LD	'o'
#define MIDDLE		' '
#define CORNER_RU	'o'
#define VERTICAL	'|'
#define CORNER_RD	'o'

#define MAX_CORNERS	2

void	ft_putchar(char c);

void	print_row(char corner_l, char middle, char corner_r, int len)
{
	ft_putchar(corner_l);
	while (len-- > MAX_CORNERS)
		ft_putchar(middle);
	if (len > 0)
		ft_putchar(corner_r);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		return ;
	print_row(CORNER_LU, HORIZONTAL, CORNER_RU, x);
	while (y-- > MAX_CORNERS)
		print_row(VERTICAL, MIDDLE, VERTICAL, x);
	if (y > 0)
		print_row(CORNER_LD, HORIZONTAL, CORNER_RD, x);
}
