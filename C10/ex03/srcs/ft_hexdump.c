/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 18:57:22 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/15 10:25:37 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

void	ft_print_row(int *index, unsigned char buf[FIELD + 1],
			unsigned int bytes_read)
{
	unsigned int	i;

	ft_puthex(*index, FIELD / 2);
	*index += bytes_read;
	i = -1;
	while (++i < FIELD)
	{
		ft_fputstr(STDOUT, " ");
		if (i % (FIELD / 2) == 0)
			ft_fputstr(STDOUT, " ");
		if (i < bytes_read)
			ft_puthex(buf[i], 2);
		else
			ft_fputstr(STDOUT, "  ");
	}
	ft_fputstr(STDOUT, "  |");
	while (bytes_read--)
	{
		if (*buf >= ' ' && *buf <= '~')
			ft_fputchar(STDOUT, *buf);
		else
			ft_fputchar(STDOUT, '.');
		buf++;
	}
	ft_fputstr(STDOUT, "|\n");
}

int	file_validator(char *program_name, char *file_path, unsigned int max_erros)
{
	int	file;

	if (ft_strcmp(file_path, "-C") == 0)
		return (INVALID);
	file = open(file_path, O_DIRECTORY);
	if (file >= 0)
	{
		ft_hexdump_error_directory(program_name, file_path);
		close(file);
		return (INVALID);
	}
	file = open(file_path, O_RDONLY);
	if (file < 0)
	{
		ft_hexdump_error_msg(program_name, file_path, max_erros);
		return (INVALID);
	}
	return (file);
}

int	buf_filler(int fd, unsigned char buf[FIELD + 1], int size, int *bytes_read)
{
	static int	i;

	if (size-- <= 0)
		return (VALID);
	*bytes_read = read(fd, buf + i % size, size - i % size);
	i = *bytes_read + i % FIELD;
	buf[i] = 0;
	if (!*bytes_read)
	{
		*bytes_read = i;
		return (0);
	}
	*bytes_read = i;
	if (i < size)
		return (INVALID);
	return (VALID);
}

int	skiped_dup_bufs(unsigned char buf[FIELD + 1], int *index)
{
	static unsigned char	prev[FIELD];
	static char				skip;

	if (ft_bufcmp(prev, buf, FIELD) != 0)
	{
		skip = 0;
		ft_bufcpy(prev, buf, FIELD);
		return (1);
	}
	if (!skip)
	{
		skip = 1;
		ft_fputstr(STDOUT, "*\n");
	}
	*index += FIELD;
	return (0);
}

void	ft_hexdump(char **argv, unsigned int nfiles, int nflags)
{
	int				file;
	int				index;
	int				bytes_read;
	char			*program_name;
	unsigned char	buf[FIELD + 1];

	index = 0;
	bytes_read = 0;
	program_name = basename(argv[0]);
	while (*++argv)
	{
		file = file_validator(program_name, *argv, nfiles);
		if (file == INVALID)
			continue ;
		while (buf_filler(file, buf, FIELD + 1, &bytes_read) == VALID)
			if (skiped_dup_bufs(buf, &index))
				ft_print_n_rows(&index, buf, bytes_read, nflags);
		close(file);
	}
	if (bytes_read)
		ft_print_n_rows(&index, buf, bytes_read, nflags);
	if (!index)
		return ;
	ft_puthex(index, FIELD / 2 - (nflags == 0));
	ft_fputstr(STDOUT, "\n");
}
