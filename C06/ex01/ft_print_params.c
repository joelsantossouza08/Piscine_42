/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 18:50:34 by joesanto          #+#    #+#             */
/*   Updated: 2025/08/30 18:53:12 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	if (!str)
		return ;
	while (*str)
		write(1, str++, 1);
}

int	main(int argc, char **argv)
{
	(void)argc;
	while (*++argv)
	{
		ft_putstr(*argv);
		ft_putstr("\n");
	}
	return (0);
}
