/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 14:23:24 by joesanto          #+#    #+#             */
/*   Updated: 2025/08/27 15:31:52 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	if (!tab || size < 0)
		return ;
	while (--size >= 0)
	{
		i = size;
		while (--i >= 0)
		{
			if (tab[size] < tab[i])
			{
				temp = tab[size];
				tab[size] = tab[i];
				tab[i] = temp;
			}
		}
	}
}
