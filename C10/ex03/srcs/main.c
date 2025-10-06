/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 18:57:04 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/15 10:24:42 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

int	get_number_of_files(char **args, unsigned int argc, int *nflags)
{
	int	nfiles;
	int	number_of_flags;

	if (!args)
		return (0);
	nfiles = 0;
	number_of_flags = 0;
	while (*args && argc--)
	{
		if (ft_strcmp(*args++, "-C") != 0)
			nfiles++;
		else
			number_of_flags++;
	}
	if (nflags)
		*nflags = number_of_flags;
	return (nfiles);
}

int	main(int argc, char **argv)
{
	int				nfiles;
	int				nflags;
	int				index;
	int				bytes_read;
	unsigned char	buf[FIELD + 1];

	nfiles = get_number_of_files(argv + 1, argc - 1, &nflags);
	if (nfiles)
		ft_hexdump(argv, nfiles, nflags);
	else
	{
		index = 0;
		while (buf_filler(STDIN, buf, FIELD + 1, &bytes_read) != 0)
			if (bytes_read == FIELD && skiped_dup_bufs(buf, &index))
				ft_print_n_rows(&index, buf, bytes_read, nflags);
		if (bytes_read)
			ft_print_n_rows(&index, buf, bytes_read, nflags);
		if (!index)
			return (0);
		ft_puthex(index, FIELD / 2 - (nflags == 0));
		ft_fputstr(STDOUT, "\n");
	}
	return (0);
}
