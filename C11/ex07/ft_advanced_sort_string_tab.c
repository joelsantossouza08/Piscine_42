/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 09:34:32 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/14 09:47:03 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		is_sorted;
	char	*tmp;

	if (!tab || !*tab)
		return ;
	is_sorted = 0;
	while (!is_sorted)
	{
		is_sorted = 1;
		i = 0;
		while (tab[i + 1])
		{
			if (cmp(tab[i], tab[i + 1]) > 0)
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
				is_sorted = 0;
			}
			i++;
		}
	}
}

//int	main(int argc, char **argv)
//{
//#include <string.h>
//#include <stdio.h>
//	(void)argc;
//	ft_advanced_sort_string_tab(argv + 1, (int(*)(char*, char*))strcmp);
//	while (*++argv)
//		printf("%s\n", *argv);
//	return (0);
//}
