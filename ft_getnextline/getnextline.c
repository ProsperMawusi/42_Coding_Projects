#include <fcntl.h>

int	main ()
{
	int		fd;
	char	*line; 

	fd = open ("tests/simple", O_RDONLY);
	while (1)
	{
		line = get_next_line(fd);
		if (line == NULL)
			break;
		printf("%s", line);
		freee(line);
	}
	return (0);
}