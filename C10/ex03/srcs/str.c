/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joesanto <joesanto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 18:59:05 by joesanto          #+#    #+#             */
/*   Updated: 2025/09/15 10:26:55 by joesanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	if (!s1 || !s2)
		return (0);
	while (*s1 == *s2)
	{
		if (!*s1)
			return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	ft_bufcmp(unsigned char *s1, unsigned char *s2, unsigned int n)
{
	while (n-- > 1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

unsigned char	*ft_bufcpy(unsigned char *dest, unsigned char *src,
					unsigned int n)
{
	unsigned char	*ptr;

	if (!dest || !src)
		return (0);
	ptr = dest;
	while (n)
	{
		*ptr++ = *src++;
		n--;
	}
	while (n--)
		*ptr++ = 0;
	return (dest);
}
