/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 19:02:22 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/10 19:02:29 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_fputchar(int fd, char c)
{
	write(fd, &c, 1);
}

void	ft_fputstr(int fd, char *str)
{
	if (fd < 0 || !str)
		return ;
	while (*str)
		ft_fputchar(fd, *str++);
}
