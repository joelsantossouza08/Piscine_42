/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 10:03:31 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/01 17:06:38 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	if (!dest || !src)
		return (0);
	i = ft_strlen(dest);
	while (i + 1 < size && *src)
		dest[i++] = *src++;
	dest[i] = 0;
	while (*src++)
		i++;
	return (i);
}
//IF SIZE IS LESS THEN ft_strlen(dest) SO SHOULD RETURN SIZE + strlen(src)
