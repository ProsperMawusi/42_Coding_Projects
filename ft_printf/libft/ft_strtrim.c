/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmawusi <pmawusi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 13:50:09 by pmawusi           #+#    #+#             */
/*   Updated: 2025/11/25 11:26:29 by pmawusi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	in_set(char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		start;
	int		end;
	int		len;
	char	*out;
	int		i;

	start = 0;
	end = 0;
	while (s1[start] && in_set(s1[start], set))
		start++;
	while (s1[end])
		end++;
	end -= 1;
	while (end >= start && in_set(s1[end], set))
		end--;
	len = end - start + 1;
	out = malloc(len + 1);
	if (!out)
		return (NULL);
	i = 0;
	while (i < len)
		out[i++] = s1[start++];
	out[i] = '\0';
	return (out);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *s1 = "AAHGABCDEHFAGH";
// 	char *set = "AGH";
// 	char *new = ft_strtrim(s1, set);
// 	printf("%s", new);
// 	return (0);
// 
/*if (!s1 || !set) 	return (NULL);*/
//}
