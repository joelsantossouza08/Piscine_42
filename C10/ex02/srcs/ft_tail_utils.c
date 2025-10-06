/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 19:02:07 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/10 22:41:43 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

void	ft_tail_invalid_bytes(char *program_name, char *invalid, char *extra)
{
	ft_fputstr(STDERR, program_name);
	ft_fputstr(STDERR, ": invalid number of bytes: ‘");
	ft_fputstr(STDERR, invalid);
	ft_fputstr(STDERR, "’");
	ft_fputstr(STDERR, extra);
	ft_fputstr(STDERR, "\n");
}

void	ft_tail_invalid_file(char *program_name, char *file)
{
	ft_fputstr(STDERR, program_name);
	ft_fputstr(STDERR, ": cannot open \'");
	ft_fputstr(STDERR, file);
	ft_fputstr(STDERR, "\' for reading: ");
	ft_fputstr(STDERR, strerror(errno));
	ft_fputstr(STDERR, "\n");
}

void	push_buf_left(char *buf, int size)
{
	int	i;

	if (!buf || size <= 1)
		return ;
	i = -1;
	while (++i < size - 1)
		buf[i] = buf[i + 1];
}

void	ft_display_last_bytes(int file, unsigned long last_bytes)
{
	char			*buf;
	char			c;
	unsigned long	i;

	if (last_bytes <= 0)
		return ;
	buf = malloc(last_bytes);
	if (!buf)
		return ;
	i = 0;
	while (read(file, &c, 1) > 0)
	{
		if (i >= last_bytes)
		{
			push_buf_left(buf, last_bytes);
			i--;
		}
		buf[i++] = c;
	}
	write(STDOUT, buf, i);
	free(buf);
}
