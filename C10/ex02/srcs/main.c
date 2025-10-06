/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 19:01:19 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/11 07:40:58 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

int	get_last_bytes(char **argv, unsigned long *bytes, int *nfiles)
{
	char			*program_name;
	int				number_of_files;

	number_of_files = 0;
	*bytes = 0;
	program_name = argv[0];
	while (*++argv)
	{
		if (ft_strcmp(*argv, "-c") != 0 && ++number_of_files)
			continue ;
		if (!ft_is_str_ulong(program_name, *++argv))
			return (INVALID);
		*argv += **argv == '-';
		*bytes = ft_atoul(*argv);
	}
	if (nfiles)
		*nfiles = number_of_files;
	return (1);
}

int	main(int argc, char **argv)
{
	unsigned long	last_bytes;
	int				nfiles;

	(void)argc;
	if (get_last_bytes(argv, &last_bytes, &nfiles) == INVALID)
		return (1);
	if (!last_bytes)
		return (0);
	if (!nfiles)
		ft_display_last_bytes(STDIN, last_bytes);
	else if (nfiles == 1)
		ft_tail(argv, last_bytes, 0);
	else
		ft_tail(argv, last_bytes, put_title);
	return (0);
}
