/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 18:56:37 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/15 10:26:10 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

void	ft_print_no_flag(int index, unsigned char buf[FIELD + 1],
			int bytes_read)
{
	int	i;

	i = 0;
	ft_puthex(index, 7);
	while (i < FIELD)
	{
		ft_fputchar(STDOUT, ' ');
		if (i < bytes_read)
		{
			ft_puthex(buf[i + 1], 2);
			ft_puthex(buf[i], 2);
		}
		else
			ft_fputstr(STDOUT, "    ");
		i += 2;
	}
	ft_fputchar(STDOUT, '\n');
}

void	ft_print_n_rows(int *index, unsigned char buf[FIELD + 1],
			int bytes_read, int nflags)
{
	if (nflags > 0)
	{
		while (nflags--)
		{
			ft_print_row(index, buf, bytes_read);
			*index -= bytes_read;
		}
	}
	else
		ft_print_no_flag(*index, buf, bytes_read);
	*index += bytes_read;
}

void	ft_hexdump_error_msg(char *program_name, char *file_path, int nfiles)
{
	static int	nerrors;

	ft_fputstr(STDERR, program_name);
	ft_fputstr(STDERR, ": ");
	ft_fputstr(STDERR, file_path);
	ft_fputstr(STDERR, ": ");
	ft_fputstr(STDERR, strerror(errno));
	if (++nerrors == nfiles)
	{
		nerrors = 0;
		ft_fputstr(STDERR, "\n");
		ft_fputstr(STDERR, program_name);
		ft_fputstr(STDERR, ": all input file arguments failed");
	}
	ft_fputstr(STDERR, "\n");
}

void	ft_hexdump_error_directory(char *program_name, char *file_path)
{
	ft_fputstr(STDERR, program_name);
	ft_fputstr(STDERR, ": ");
	ft_fputstr(STDERR, file_path);
	ft_fputstr(STDERR, ": Is a directory\n");
}
