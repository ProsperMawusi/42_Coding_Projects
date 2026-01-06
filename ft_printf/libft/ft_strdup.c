/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmawusi <pmawusi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 11:44:32 by pmawusi           #+#    #+#             */
/*   Updated: 2025/11/19 21:53:07 by pmawusi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	i;

	i = 0;
	dup = (char *)malloc(ft_strlen((char *)s) + 1);
	if (!dup)
		return (NULL);
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

// int main() {
//     char *original = "Hallo Welt";
//     char *kopie;

//     kopie = ft_strdup(original); // Eine Kopie erstellen

//     if (kopie != NULL) {
//         printf("Original: %s\n", original);
//         printf("Kopie: %s\n", kopie);
//         free(kopie); // Speicher freigeben
//     } else {
//         perror("strdup fehlgeschlagen");
//     }

//     return 0;
// }
