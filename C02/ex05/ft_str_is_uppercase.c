/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 11:28:01 by joesanto          #+#    #+#             */
/*   Updated: 2025/08/28 11:32:09 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_upper(char chr)
{
	return (chr >= 'A' && chr <= 'Z');
}

int	ft_str_is_uppercase(char *str)
{
	if (!str)
		return (0);
	while (*str)
		if (!is_upper(*str++))
			return (0);
	return (1);
}
