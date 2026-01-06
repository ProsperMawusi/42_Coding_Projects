/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmawusi <pmawusi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 18:31:17 by pmawusi           #+#    #+#             */
/*   Updated: 2025/11/26 11:55:53 by pmawusi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*temp;
	size_t	s1_len;
	size_t	temp_size;

	s1_len = ft_strlen(s1);
	temp_size = s1_len + ft_strlen(s2) + 1;
	temp = (char *)malloc(temp_size);
	if (!temp)
		return (NULL);
	ft_strlcpy(temp, s1, s1_len + 1);
	ft_strlcat(temp, s2, temp_size);
	return (temp);
}
// #include "libft.h"
// #include <stdio.h>

// int main(void)
// {
//     char *result1 = ft_strjoin("Hello, ", "world!");
//     char *result2 = ft_strjoin("", "Test");
//     char *result3 = ft_strjoin("42", "");
//     char *result4 = ft_strjoin("", "");

//     printf("Test 1: %s\n", result1);
//     printf("Test 2: %s\n", result2);
//     printf("Test 3: %s\n", result3);
//     printf("Test 4: %s\n", result4);

//     free(result1);
//     free(result2);
//     free(result3);
//     free(result4);

//     return 0;
// }
