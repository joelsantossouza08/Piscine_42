/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 08:09:20 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/11 07:29:35 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

int	main(int argc, char **argv)
{
	char	*program_name;

	program_name = argv[0];
	if (argc == 1)
		ft_display_file(program_name, "-");
	else
		while (*++argv)
			ft_display_file(program_name, *argv);
	return (0);
}
