/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 08:22:22 by joesanto          #+#    #+#             */
/*   Updated: 2025/08/28 08:55:22 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_numeric(char chr)
{
	return (chr >= '0' && chr <= '9');
}

int	ft_str_is_numeric(char *str)
{
	if (!str)
		return (0);
	while (*str)
		if (!is_numeric(*str++))
			return (0);
	return (1);
}
