/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkafanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 09:22:33 by tkafanov          #+#    #+#             */
/*   Updated: 2024/04/04 14:23:08 by tkafanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*match;

	match = 0;
	while (*s)
	{
		if (*s == c)
			match = (char *)s;
		s++;
	}
	if (match == 0)
		return (0);
	else
		return ((char *)s);
}
