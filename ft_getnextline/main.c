/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmawusi <pmawusi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 10:37:26 by pmawusi           #+#    #+#             */
/*   Updated: 2026/01/07 13:19:42 by pmawusi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int fd = open("linestest", O_RDONLY);
	if (fd < 0)
	{
		perror("open");
		return (1);
	}
	char *line;
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line); // print the line as is (including newline)
		free(line);
	}
	close(fd);
	return (0);
}