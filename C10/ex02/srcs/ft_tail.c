/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 19:00:39 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/11 07:40:37 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

void	put_title(char *file_path)
{
	ft_fputstr(STDOUT, "==> ");
	if (ft_strcmp(file_path, "-") == 0)
		ft_fputstr(STDOUT, "standard input");
	else
		ft_fputstr(STDOUT, file_path);
	ft_fputstr(STDOUT, " <==\n");
}

int	file_validation(char *program_name, char *file_path)
{
	int	file;

	if (ft_strcmp(file_path, "-c") == 0)
		return (INVALID);
	if (ft_strcmp(file_path, "-") == 0)
		return (STDIN);
	file = open(file_path, O_RDONLY);
	if (file < 0)
	{
		ft_tail_invalid_file(program_name, file_path);
		return (ERROR);
	}
	return (file);
}

void	ft_tail(char **argv, unsigned long last_bytes,
			void (*put_title)(char *))
{
	int		file;
	char	*program_name;
	char	is_first;

	is_first = 1;
	program_name = argv[0];
	while (*++argv)
	{
		file = file_validation(program_name, *argv);
		if (file < 0)
		{
			if (file == INVALID)
				argv++;
			continue ;
		}
		if (!is_first)
			ft_fputstr(STDOUT, "\n");
		if (put_title)
			put_title(*argv);
		ft_display_last_bytes(file, last_bytes);
		is_first = 0;
		if (file > STDERR)
			close(file);
	}
}
