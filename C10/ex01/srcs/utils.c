/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 08:05:31 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/11 07:29:12 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

void	ft_cat_error_msg(char *program_name, char *file_path)
{
	ft_fputstr(STDERR, program_name);
	ft_fputstr(STDERR, ": ");
	ft_fputstr(STDERR, file_path);
	ft_fputstr(STDERR, ": ");
	ft_fputstr(STDERR, strerror(errno));
	ft_fputstr(STDERR, "\n");
}

int	ft_strcmp(char *s1, char *s2)
{
	if (!s1 || !s2)
		return (0);
	while (*s1 == *s2)
	{
		if (!*s1)
			return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_fputstr(int fd, char *str)
{
	if (fd < 0 || !str)
		return ;
	while (*str)
		write(fd, str++, 1);
}
