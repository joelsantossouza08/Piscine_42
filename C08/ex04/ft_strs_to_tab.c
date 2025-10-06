/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 17:39:06 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/03 14:15:27 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//typedef struct s_stock_str
//{
//int size;
//char *str;
//char *copy;
//} t_stock_str;

#include <stdlib.h>
#include "ft_stock_str.h"

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

char	*ft_strdup(char *str)
{
	char	*new;
	char	*new_ptr;

	new = malloc(ft_strlen(str) + 1);
	new_ptr = new;
	while (*str)
		*new_ptr++ = *str++;
	*new_ptr = 0;
	return (new);
}

int	set_stock_str(struct s_stock_str *stock_str, char *str)
{
	stock_str->size = ft_strlen(str);
	stock_str->str = str;
	stock_str->copy = 0;
	if (str)
	{
		stock_str->copy = ft_strdup(str);
		if (!stock_str->copy)
			return (0);
	}
	return (1);
}

void	free_all_stocks(struct s_stock_str **stocks)
{
	struct s_stock_str	*stock;

	stock = *stocks;
	while (stock->str)
	{
		free(stock->copy);
		stock++->copy = 0;
	}
	free(*stocks);
	*stocks = 0;
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*stock_strs;
	struct s_stock_str	*ptr;

	if (!av || ac < 0)
		return (0);
	stock_strs = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!stock_strs)
		return (0);
	ptr = stock_strs;
	while (ac--)
	{
		if (!set_stock_str(ptr, *av++))
		{
			set_stock_str(ptr, 0);
			free_all_stocks(&stock_strs);
			return (0);
		}
		ptr++;
	}
	set_stock_str(ptr, 0);
	return (stock_strs);
}
//#include<stdio.h>
//int	main(int argc, char **argv)
//{
//	struct s_stock_str	*stocks;
//	struct s_stock_str	*stocks_ptr;
//
//	stocks_ptr = stocks = ft_strs_to_tab(argc, argv + 1);
//	while (argc--)
//	{
//		printf("size: %d\n", stocks_ptr->size);
//		printf("str:  %s\n", stocks_ptr->str);
//		printf("copy: %s\n\n", stocks_ptr->copy);
//		stocks_ptr++;
//	}
//	free_all_stocks(&stocks);
//	return (0);
//}
