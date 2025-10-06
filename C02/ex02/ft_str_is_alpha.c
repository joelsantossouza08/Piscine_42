/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 07:40:47 by joesanto          #+#    #+#             */
/*   Updated: 2025/08/28 08:19:47 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_lower(char chr)
{
	return (chr >= 'a' && chr <= 'z');
}

int	to_upper(char chr)
{
	if (is_lower(chr))
		return (chr - ('a' - 'A'));
	return (chr);
}

int	is_alpha(char chr)
{
	return (to_upper(chr) >= 'A' && to_upper(chr) <= 'Z');
}

int	ft_str_is_alpha(char *str)
{
	if (!str)
		return (0);
	while (*str)
		if (!is_alpha(*str++))
			return (0);
	return (1);
}
