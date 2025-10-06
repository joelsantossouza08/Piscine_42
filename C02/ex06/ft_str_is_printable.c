/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 11:40:34 by joesanto          #+#    #+#             */
/*   Updated: 2025/08/29 09:43:32 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_printable(char chr)
{
	return (chr >= ' ' && chr <= '~');
}

int	ft_str_is_printable(char *str)
{
	if (!str)
		return (0);
	while (*str)
		if (!is_printable(*str++))
			return (0);
	return (1);
}
