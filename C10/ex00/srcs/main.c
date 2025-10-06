/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 18:22:49 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/04 18:03:23 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_fputstr(STDERR, "File name missing.\n");
		return (1);
	}
	if (argc > 2)
	{
		ft_fputstr(STDERR, "Too many arguments.\n");
		return (2);
	}
	ft_display_file(argv[1]);
	return (0);
}
