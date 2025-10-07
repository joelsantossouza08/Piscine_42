/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 18:50:34 by joesanto          #+#    #+#             */
/*   Updated: 2025/10/07 16:45:22 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	if (!str)
		return ;
	while (*str)
		ft_putchar(*str++);
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
